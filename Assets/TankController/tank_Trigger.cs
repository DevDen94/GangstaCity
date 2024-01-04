using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tank_Trigger : MonoBehaviour
{
    public GameObject spawnPoint;
    public GameObject PlayerSpawn;
    public GameObject Referencetank;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            TankSpawner.instance.TankIn.gameObject.SetActive(true);
            TankSpawner.instance.SpawnPos = spawnPoint;
            TankSpawner.instance.ReferenceTank = Referencetank;
            TankSpawner.instance.TempTank = gameObject;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            TankSpawner.instance.TankIn.gameObject.SetActive(false);
            TankSpawner.instance.SpawnPos= null;
            TankSpawner.instance.ReferenceTank = null;
            TankSpawner.instance.TempTank = null;
        }
    }
}
