using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Bike_Trigger : MonoBehaviour
{
    public GameManger gm;
    public GameObject BikeCanvas;
    public BikeCamera Bike_cam;
    public PlayerNavigation playerNav;
    public GameObject SpawnPostion;
    public GameObject ReferenceBike;
    public Button BikeInBtn;
    public GameObject fade_Screen;
    private void Start()
    {
        BikeInBtn.onClick.AddListener(SpawnPlayerBike);
    }
    void SpawnPlayerBike()
    {
        
       
        gm.OFF_TPS();
        fade_Screen.SetActive(true);
        Destroy(gameObject);
        BikeCanvas.SetActive(true);
        Bike_cam.gameObject.SetActive(true);
        GameObject temp= Instantiate(ReferenceBike, SpawnPostion.transform.position, SpawnPostion.transform.rotation);
        Bike_cam.target = temp.transform;
        playerNav.player = temp.transform;


    } 
    
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            BikeInBtn.gameObject.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            BikeInBtn.gameObject.SetActive(false);
        }
    }
}
