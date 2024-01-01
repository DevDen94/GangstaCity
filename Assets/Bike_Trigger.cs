using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Bike_Control : MonoBehaviour
{
    public GameManger gm;
    public GameObject BikeCanvas;
    public BikeCamera Bike_cam;
    public PlayerNavigation playerNav;
    public GameObject SpawnPostion;
    public GameObject ReferenceBike;
    public Button BikeInBtn;
    public Button BikeOffBtn;
    public GameObject fade_Screen;
    public GameObject ActiveBike;
    public static Bike_Control instance;
    public GameObject TempBike;
    private void Start()
    {
        instance = this;
        BikeInBtn.onClick.AddListener(SpawnPlayerBike);
        BikeOffBtn.onClick.AddListener(RideOff);
    }
    void SpawnPlayerBike()
    {
        
       
        gm.OFF_TPS();
        fade_Screen.SetActive(true);
        TempBike.SetActive(false);
        BikeCanvas.SetActive(true);
        Bike_cam.gameObject.SetActive(true);
        ActiveBike = Instantiate(ReferenceBike, SpawnPostion.transform.position, SpawnPostion.transform.rotation);
        Bike_cam.target = ActiveBike.transform;
        playerNav.player = ActiveBike.transform;
        BikeInBtn.gameObject.SetActive(false);
        BikeOffBtn.gameObject.SetActive(true);

    } 
    void RideOff()
    {
        TempBike.SetActive(true);
        TempBike.transform.SetPositionAndRotation(ActiveBike.transform.position, ActiveBike.transform.rotation);
        Destroy(ActiveBike);
        gm.FadeScreen_Long.SetActive(true);
        gm.Set_TPS();
        gm.ThirdPersonPLayer.transform.SetPositionAndRotation(SpawnPostion.transform.position, SpawnPostion.transform.rotation);
        playerNav.player = gm.ThirdPersonPLayer.transform;
        BikeCanvas.SetActive(false);
        Bike_cam.gameObject.SetActive(false);
        BikeOffBtn.gameObject.SetActive(false);
    }
    
    
   
}
