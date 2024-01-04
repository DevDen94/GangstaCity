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
            Bike_ControlS.instance.BikeInBtn.gameObject.SetActive(true);
            Bike_ControlS.instance.SpawnPostion = spawnPoint;
            Bike_ControlS.instance.ReferenceBike = ReferenceBike;
            Bike_ControlS.instance.TempBike = gameObject;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Bike_ControlS.instance.BikeInBtn.gameObject.SetActive(false);
            Bike_ControlS.instance.SpawnPostion = null;
            Bike_ControlS.instance.ReferenceBike = null;
            Bike_ControlS.instance.TempBike = null;
        }
    }
}
