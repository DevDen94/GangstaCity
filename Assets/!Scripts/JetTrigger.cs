using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JetTrigger : MonoBehaviour
{
    public GameObject spawnPoint;
    public GameObject PlayerSpawn;
    public GameObject ReferencePlayer;
    public string JetName;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {

            JetSpawner.instance.Button_In.gameObject.SetActive(true);
            JetSpawner.instance.SpawnPos = spawnPoint;
    
            JetSpawner.instance.Temp = gameObject;
            JetSpawner.instance.JetName = JetName;
            JetSpawner.instance.Off_Jet = false;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            JetSpawner.instance.Button_In.gameObject.SetActive(false);
            JetSpawner.instance.SpawnPos = null;
            JetSpawner.instance.Temp = null;
            JetSpawner.instance.JetName = null;
        }
    }
}
