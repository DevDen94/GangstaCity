using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tank_Trigger : MonoBehaviour
{
    public GameObject spawnPoint;
    public GameObject PlayerSpawn;
    public GameObject Referencetank;
    public string tankName;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player") && other.gameObject.layer == LayerMask.NameToLayer("Player"))
        {
           
            TankSpawner.instance.TankIn.gameObject.SetActive(true);
            TankSpawner.instance.SpawnPos = spawnPoint;
            TankSpawner.instance.ReferenceTank = Referencetank;
            TankSpawner.instance.TempTank = gameObject;
            TankSpawner.instance.TankName = tankName;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player") && other.gameObject.layer == LayerMask.NameToLayer("Player"))
        {
            TankSpawner.instance.TankIn.gameObject.SetActive(false);
            TankSpawner.instance.SpawnPos= null;
            TankSpawner.instance.ReferenceTank = null;
            TankSpawner.instance.TempTank = null;
            TankSpawner.instance.TankName = null;
        }
    }
}
