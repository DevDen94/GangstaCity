using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficStop : MonoBehaviour
{
    public GameObject g1;
    public GameObject g2;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            gameObject.GetComponent<Rigidbody>().isKinematic = true;
            g1.GetComponent<TSSimpleCar_Wheel>().enabled = false;
            g2.GetComponent<TSSimpleCar_Wheel>().enabled = false;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            gameObject.GetComponent<Rigidbody>().isKinematic = false;
            g1.GetComponent<TSSimpleCar_Wheel>().enabled = true;
            g2.GetComponent<TSSimpleCar_Wheel>().enabled = true;
        }
    }
}
