using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bike_Triggerr : MonoBehaviour
{
    public GameObject spawnPoint;
    public GameObject ReferenceBike;
    public string Name;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player") && other.gameObject.layer == LayerMask.NameToLayer("Player"))
        {
            if (Bike_ControlS.instance.gira_gya==false)
            {
                Bike_ControlS.instance.BikeInBtn.gameObject.SetActive(true);
                Bike_ControlS.instance.SpawnPostion = spawnPoint;
                Bike_ControlS.instance.ReferenceBike = ReferenceBike;
                Bike_ControlS.instance.TempBike = gameObject;
                Bike_ControlS.instance.BikeName = name;
                JetSpawner.instance.Button_In.gameObject.SetActive(false);
                TankSpawner.instance.TankIn.gameObject.SetActive(false);
                Car_Manager.instance.Carbutton_IN.gameObject.SetActive(false);
               
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player") && other.gameObject.layer == LayerMask.NameToLayer("Player"))
        {
            Bike_ControlS.instance.BikeInBtn.gameObject.SetActive(false);
            Bike_ControlS.instance.SpawnPostion = null;
            Bike_ControlS.instance.ReferenceBike = null;
            Bike_ControlS.instance.TempBike = null;
            Bike_ControlS.instance.BikeName = null;
        }
    }
}
