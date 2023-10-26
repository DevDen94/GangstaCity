using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class indicatorScript : MonoBehaviour
{
    public Transform destination;  // The GameObject you want to point to

    private void Update()
    {
        if (destination != null)
        {
            // Calculate the direction from the indicator to the destination
            Vector3 direction = destination.position - transform.position;

            // Calculate the rotation needed to point the indicator in that direction
            Quaternion rotation = Quaternion.LookRotation(direction);

            // Apply the rotation to the indicator
            transform.rotation = rotation;
        }
    }
}
