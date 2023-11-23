using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoliceCar_Check : MonoBehaviour
{
    public float detectionRadius = 50f;
    public GameObject Player;
    private GameObject[] nearbyPLCObjects;
    public bool Check_PoliceCar;
    public GameObject Near_Object;

    private void OnTriggerEnter(Collider other)
    {
        if (Check_PoliceCar)
        {
            if (other.gameObject.tag == "PLC")
            {
                float distance = Vector3.Distance(Player.transform.position, other.transform.position);

                if (distance <= detectionRadius)
                {
                    // Add the nearby PLC object to the array
                    AddToNearbyPLCObjects(other.gameObject);
                    NearestPLCObject();
                }
            }
        }
      
    }
   
    private void AddToNearbyPLCObjects(GameObject plcObject)
    {
        // Add the PLC object to the array
        if (nearbyPLCObjects == null)
        {
            nearbyPLCObjects = new GameObject[] { plcObject };
        }
        else
        {
            // Resize the array and add the new PLC object
            System.Array.Resize(ref nearbyPLCObjects, nearbyPLCObjects.Length + 1);
            nearbyPLCObjects[nearbyPLCObjects.Length - 1] = plcObject;
        }
    }
    private void NearestPLCObject()
    {
        if (nearbyPLCObjects != null && nearbyPLCObjects.Length > 0)
        {
            GameObject nearestPLCObject = GetNearestPLCObject();

            if (nearestPLCObject != null)
            {
                Near_Object = nearestPLCObject;
             
            }
        }
    }
   
    private GameObject GetNearestPLCObject()
    {
        GameObject nearestObject = null;
        float nearestDistance = float.MaxValue;

        foreach (GameObject plcObject in nearbyPLCObjects)
        {
            float distance = Vector3.Distance(Player.transform.position, plcObject.transform.position);

            if (distance < nearestDistance)
            {
                nearestObject = plcObject;
                nearestDistance = distance;
            }
        }

        return nearestObject;
    }
}
