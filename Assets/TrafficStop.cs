using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficStop : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            gameObject.GetComponent<Rigidbody>().isKinematic = true;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            gameObject.GetComponent<Rigidbody>().isKinematic = false;
        }
    }
}
