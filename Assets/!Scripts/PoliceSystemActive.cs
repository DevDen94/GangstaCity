using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
public class PoliceSystemActive : MonoBehaviour
{
    public GameObject objectToSpawn; // The object you want to spawn
    public Transform playerTransform; // Reference to the player's transform
    public float distanceBehindPlayer = 6f; // Distance behind the player to spawn the objects
    public bool PoliceActive;
    public bool PoliceSirenDelay_Complete;
    public static PoliceSystemActive instance;
    public bool ispoliceCar_Active;
    public GameObject CarOutBtn;
    [HideInInspector]
    public bool isPolice_CarTimer;
    public GameObject PoliceCarPanel;
   
    
    private void Start()
    {
        isPolice_CarTimer = true;
        PoliceSirenDelay_Complete = true;
        instance = this;
    }
    private void Update()
    {
        if (PlayerPrefs.GetInt("Mode_Select") == 1)
            return;

        if (PoliceActive)
        {
            PoliceSirenDelay_Complete = false;
            PoliceActive = false;
            SetPoliceActive();
            Invoke("Delay_PoliceMens", 10f);
        }
        if (ispoliceCar_Active)
        {
            isPolice_CarTimer = false;
            SpawnerReference.GetComponent<SphereCollider>().enabled = false;
            plc.Check_PoliceCar = true;
            ispoliceCar_Active = false;
            SpawnerReference.GetComponent<SphereCollider>().enabled = true;
            playerCar = Car_Manager.instance.target_RccCar;
            Invoke("SpawnPoliceCar", 1f);
            Invoke("Delay_PoliceCars", 25f);


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
        Debug.LogError("POLICEEE");
     }
    void Delay_PoliceMens()
    {
        PoliceSirenDelay_Complete = true;
    }
  
    void Delay_PoliceCars()
    {
        isPolice_CarTimer = true;
    }

    void SpawnPoliceCar()
    {
        if (ParentPoliceMens.transform.childCount > 0)
        {
            foreach (Transform child in ParentPoliceMens.transform)
            {
                Destroy(child.gameObject);
            }
        }
        PoliceCarPanel.SetActive(true);
        PoliceCarPanel.transform.GetChild(0).GetComponent<Text>().text = "Police Car is Active. Go Fight or Move Away from it";
        Instantiate(policeCarPrefab.transform, plc.Near_Object.transform.position, plc.Near_Object.transform.rotation);
        plc.Check_PoliceCar = false;
        CarOutBtn.SetActive(false);

        if (GameManger.instance.MissionActive != null)
        { 
            GameManger.instance.MissionActive.SetActive(false);
        }

    }

    public GameObject SpawnerReference;
   
}

