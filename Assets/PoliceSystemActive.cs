using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoliceSystemActive : MonoBehaviour
{
    public GameObject objectToSpawn; // The object you want to spawn
    public Transform playerTransform; // Reference to the player's transform
    public float distanceBehindPlayer = 6f; // Distance behind the player to spawn the objects
    public bool PoliceActive;
    public bool PoliceSirenDelay_Complete;
    public static PoliceSystemActive instance;
    private void Start()
    {
        PoliceSirenDelay_Complete = true;
        instance = this;
    }
    private void Update()
    {
        if (PoliceActive)
        {
            PoliceSirenDelay_Complete = false;
            PoliceActive = false;
            SetPoliceActive();
            Invoke("Delay", 45f);
        }
        
    }
    public void SetPoliceActive() { 
        Vector3 spawnPosition = playerTransform.position - playerTransform.forward * distanceBehindPlayer;
        Vector3 spawnPosition1 = playerTransform.position - playerTransform.forward* 8f;
        Instantiate(objectToSpawn, spawnPosition, Quaternion.identity);
        Instantiate(objectToSpawn, spawnPosition1, Quaternion.identity);  
     }
    void Delay()
    {
        PoliceSirenDelay_Complete = true;
    }
    }

