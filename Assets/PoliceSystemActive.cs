using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
public class PoliceSystemActive : MonoBehaviour
{
    public GameObject objectToSpawn; // The object you want to spawn
    public Transform playerTransform; // Reference to the player's transform
    public float distanceBehindPlayer = 6f; // Distance behind the player to spawn the objects
    public bool PoliceActive;
    public bool PoliceSirenDelay_Complete;
    public static PoliceSystemActive instance;
    public bool ispoliceCar_Active;
    
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
        if (ispoliceCar_Active)
        {
            SpawnerReference.GetComponent<SphereCollider>().enabled = false;
            plc.Check_PoliceCar = true;
            ispoliceCar_Active = false;
            SpawnerReference.GetComponent<SphereCollider>().enabled = true;
            playerCar = Car_Manager.instance.target_RccCar;
            Invoke("SpawnPoliceCar", 1f);

        }
        
    }
    public PoliceCar_Check plc;
    public Transform playerCar;
    public GameObject policeCarPrefab;
    public GameObject ParentPoliceMens;
    public void SetPoliceActive() {
        
        Vector3 spawnPosition = playerTransform.position - playerTransform.forward * distanceBehindPlayer;
        Vector3 spawnPosition1 = playerTransform.position - playerTransform.forward* 8f;
        GameObject g1=  Instantiate(objectToSpawn, spawnPosition, Quaternion.identity);
        GameObject g2 = Instantiate(objectToSpawn, spawnPosition1, Quaternion.identity);
        g1.transform.SetParent(ParentPoliceMens.transform);
        g2.transform.SetParent(ParentPoliceMens.transform);
     }
    void Delay()
    {
        PoliceSirenDelay_Complete = true;
    }
  

    void SpawnPoliceCar()
    {
        if (ParentPoliceMens.transform.childCount > 0)
        {
            foreach (Transform child in ParentPoliceMens.transform)
            {
                Destroy(child);
            }
        }
        Instantiate(policeCarPrefab.transform, plc.Near_Object.transform.position, plc.Near_Object.transform.rotation);
        plc.Check_PoliceCar = false;
    }

    public GameObject SpawnerReference;
   
}

