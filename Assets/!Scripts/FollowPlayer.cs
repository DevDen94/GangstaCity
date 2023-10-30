using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    public Transform player;   // Reference to the player's Transform.
    public float smoothSpeed = 5f;  // The higher this value, the faster the camera follows.

    private void LateUpdate()
    {
        if (player == null)
        {
            return;  // If the player reference is null, do nothing.
        }

        // Calculate the new position for the camera.
        Vector3 targetPosition = new Vector3(player.position.x, transform.position.y, player.position.z);

        // Use Lerp to smoothly move the camera towards the target position.
        transform.position = Vector3.Lerp(transform.position, targetPosition, smoothSpeed * Time.deltaTime);
    }
}
