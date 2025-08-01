﻿/*  This file is part of the "Simple Waypoint System" project by FLOBUK.
 *  You are only allowed to use these resources if you've bought them from the Unity Asset Store.
 * 	You shall not license, sublicense, sell, resell, transfer, assign, distribute or
 * 	otherwise make available to any third party the Service or the Content. */

using UnityEngine;

namespace SWS
{
    using DG.Tweening;

    /// <summary>
    /// Example: object controlled by user input along the path
    /// <summary>
    public class PathInputDemo : MonoBehaviour
    {
        /// <summary>
        /// Speed value to multiply the input speed with. 
        /// <summary>
        public float speedMultiplier = 10f;

        /// <summary>
        /// Object progress on the path, should be read only.
        /// <summary>
        public float progress = 0f;

        //references
        private splineMove move;
        private Animator animator;


        //get references at start
        //initialize movement but don't start it yet
        void Start()
        {
            animator = GetComponent<Animator>();
            move = GetComponent<splineMove>();
            move.StartMove();
            move.Pause();
            progress = 0f;
        }


        //listens to user input
        void Update()
        {
            float speed = speedMultiplier / 100f;
            float duration = move.tween.Duration();

            //right arrow key
            if (ControlFreak2.CF2Input.GetKey(KeyCode.RightArrow))
            {
                //add a value based on time and speed to the progress to start moving right
                progress += Time.deltaTime * 10 * speed;
                progress = Mathf.Clamp(progress, 0, duration);
                move.tween.fullPosition = progress;
            }

            //left arrow key
            //same as above, but here we invert the progress direction
            if (ControlFreak2.CF2Input.GetKey(KeyCode.LeftArrow))
            {
                progress -= Time.deltaTime * 10 * speed;
                progress = Mathf.Clamp(progress, 0, duration);
                move.tween.fullPosition = progress;
            }

            //let Mecanim animate our object when moving,
            //otherwise set speed to zero
            if ((ControlFreak2.CF2Input.GetKey(KeyCode.RightArrow) || ControlFreak2.CF2Input.GetKey(KeyCode.LeftArrow))
                && progress != 0 && progress != duration)
                animator.SetFloat("Speed", move.speed);
            else
                animator.SetFloat("Speed", 0f);
        }


        void LateUpdate()
        {
            //if we are moving backwards, rotate our walker by 180 degrees
            //this happens after the tween has updated the transform
            if (ControlFreak2.CF2Input.GetKey(KeyCode.LeftArrow))
            {
                Vector3 rot = transform.localEulerAngles;
                rot.y += 180;
                transform.localEulerAngles = rot;
            }
        }
    }
}