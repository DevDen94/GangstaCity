using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bike_Triggerr : MonoBehaviour
{
    public GameObject spawnPoint;
    public GameObject ReferenceBike;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Bike_Control.instance.BikeInBtn.gameObject.SetActive(true);
            Bike_Control.instance.SpawnPostion = spawnPoint;
            Bike_Control.instance.ReferenceBike = ReferenceBike;
            Bike_Control.instance.TempBike = gameObject;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Bike_Control.instance.BikeInBtn.gameObject.SetActive(false);
            Bike_Control.instance.SpawnPostion = null;
            Bike_Control.instance.ReferenceBike = null;
            Bike_Control.instance.TempBike = null;
        }
    }
}
