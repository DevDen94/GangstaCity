using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lights : MonoBehaviour
{
    public Light blueLight; public Light bluelight1;
    public Light redLight; public Light redlight1;
    public float blinkSpeed = 0.5f; // Adjust the speed of the blinking

    private float timer = 0.0f;
    private bool isBlueOn = true;

    void Update()
    {
        // Update the timer
        timer += Time.deltaTime;

        // Toggle lights based on blinkSpeed
        if (timer >= blinkSpeed)
        {
            isBlueOn = !isBlueOn;
            timer = 0.0f;
        }

        // Set light intensity based on the toggle state
        if (isBlueOn)
        {
            bluelight1.intensity = 1.0f;
            blueLight.intensity = 1.0f;
            redLight.intensity = 0f;
            redlight1.intensity = 0f;
        }
        else
        {
            bluelight1.intensity = 0.0f;
            blueLight.intensity = 0.0f;
            redLight.intensity = 1.0f;
            redlight1.intensity = 1.0f;
        }
    }
}
