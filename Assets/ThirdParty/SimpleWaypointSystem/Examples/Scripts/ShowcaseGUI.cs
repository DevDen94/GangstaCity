﻿/*  This file is part of the "Simple Waypoint System" project by FLOBUK.
 *  You are only allowed to use these resources if you've bought them from the Unity Asset Store.
 * 	You shall not license, sublicense, sell, resell, transfer, assign, distribute or
 * 	otherwise make available to any third party the Service or the Content. */

using UnityEngine;
using UnityEngine.SceneManagement;

namespace SWS
{
    /// <summary>
    /// Showcase GUI for navigating between scenes.
    /// <summary>
    public class ShowcaseGUI : MonoBehaviour
    {
        private static ShowcaseGUI instance;
        private int levels = 10;


        void Start()
        {
            if (instance)
                Destroy(gameObject);

            instance = this;
            //DontDestroyOnLoad(gameObject);

            ActivateSurroundings();
            SceneManager.sceneLoaded += OnLevelLoaded;
        }


        void OnLevelLoaded(Scene scene, LoadSceneMode mode)
        {
            ActivateSurroundings();
        }


        void ActivateSurroundings()
        {
            GameObject floor = GameObject.Find("Floor_Tile");
            if (floor)
            {
                foreach (Transform trans in floor.transform)
                {
                    trans.gameObject.SetActive(true);
                }
            }
        }


        void OnGUI()
        {
            int width = Screen.width;
            int buttonW = 30;
            int buttonH = 40;


            Rect leftRect = new Rect(width - buttonW * 2 - 70, 10, buttonW, buttonH);
            if (SceneManager.GetActiveScene().buildIndex > 0 && GUI.Button(leftRect, "<"))
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
            else if (GUI.Button(new Rect(leftRect), "<"))
                SceneManager.LoadScene(levels - 1);

            GUI.Box(new Rect(width - buttonW - 70, 10, 60, buttonH),
                    "Scene:\n" + (SceneManager.GetActiveScene().buildIndex + 1) + " / " + levels);

            Rect rightRect = new Rect(width - buttonW - 10, 10, buttonW, buttonH);
            if (SceneManager.GetActiveScene().buildIndex < levels - 1 && GUI.Button(new Rect(rightRect), ">"))
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            else if (GUI.Button(new Rect(rightRect), ">"))
                SceneManager.LoadScene(0);

            GUI.Box(new Rect(width - 65 * 2, 50, 120, 55), "Example scenes\nmust be added\nto Build Settings.");
        }
    }
}