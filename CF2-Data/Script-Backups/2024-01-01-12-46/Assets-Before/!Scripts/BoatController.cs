using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoatController : MonoBehaviour
{
    public float moveSpeed = 5f; // Adjust the speed as needed
    public float rotationSpeed = 2f; // Adjust the rotation speed as needed

    private Rigidbody rb;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        float horizontalInput = Input.GetAxis("Horizontal");
        float verticalInput = Input.GetAxis("Vertical");

        // Calculate the boat's forward and sideways movement
        Vector3 moveDirection = transform.forward * verticalInput * moveSpeed;
        Vector3 rotateDirection = transform.up * horizontalInput * rotationSpeed;

        // Apply forces to the Rigidbody
        rb.AddForce(moveDirection, ForceMode.Force);
        rb.AddTorque(rotateDirection, ForceMode.Force);
    }
}
