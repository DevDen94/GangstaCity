using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputHandle : MonoBehaviour
{
    private PlayerMovement Player;

    public float Horizontal;
    public float Vertical;

    public bool Jump;
    public bool JumpHold;

    public bool Accelerate;

    public bool LB;
    public bool RB;

    public bool Fly;

    private void Start()
    {
        Player = GetComponent<PlayerMovement>();
    }

    // Update is called once per frame
    void Update()
    {
        Horizontal = ControlFreak2.CF2Input.GetAxis("Horizontal");
        Vertical = ControlFreak2.CF2Input.GetAxis("Vertical");

        Jump = ControlFreak2.CF2Input.GetButtonDown("Jump");
        JumpHold = ControlFreak2.CF2Input.GetButton("Jump");
        Fly = JumpHold; 

        RB = ControlFreak2.CF2Input.GetButton("RightTilt");
        LB = ControlFreak2.CF2Input.GetButton("LeftTilt");

    }
}
