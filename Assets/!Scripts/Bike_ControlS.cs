using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Gley.MobileAds.Internal;
public class Bike_ControlS : MonoBehaviour
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
    public static Bike_ControlS instance;
    public GameObject TempBike;
    public Camera tps;
    public string BikeName; public GameObject BuyPanel;
    public bool gira_gya;
    public GameObject BikeDamage;
    public Slider BikeHealth;
   
    public void Your_CurrentCar_Health(int dm)
    {
      //  BikeHealth.value = dm;
    }
    private void Start()
    {
        instance = this;
        BikeInBtn.onClick.AddListener(SpawnPlayerBike);
        BikeOffBtn.onClick.AddListener(RideOff);
        
    }
    void SpawnPlayerBike()
    {
        if (PlayerPrefs.GetInt(BikeName) == 0)
        {
            GameManger.instance.MiniMap_Off();
            BuyPanel.SetActive(true);
        }
        else

        {
            foreach (GameObject a in TankSpawner.instance.inbtns)
            {
                a.SetActive(false);
            }
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
            GameManger.instance.Hud_Navigation.SetActive(true);
            //Car_Manager.instance.hudNav.PlayerCamera = Bike_cam.GetComponent<Camera>();
            Car_Manager.instance.Carbutton_IN.gameObject.SetActive(false);
            TankSpawner.instance.TankIn.gameObject.SetActive(false);
            JetSpawner.instance.Button_In.gameObject.SetActive(false);

        }
    }
    public void BikeBuySucessfull()
    {
        PlayerPrefs.SetInt(BikeName, 1);
        BuyPanel.SetActive(false);
        SpawnPlayerBike();
        GameManger.instance.MiniMap_On();
    }
    public void BuyBike()
    {
        if (PlayerPrefs.GetInt("Cash") >= 1000)
        {
            PlayerPrefs.SetInt(BikeName, 1);
            PlayerPrefs.SetInt("Cash", PlayerPrefs.GetInt("Cash") - 1000);
            GameManger.instance.CashText.text = PlayerPrefs.GetInt("Cash").ToString();
            BuyPanel.SetActive(false); SpawnPlayerBike();
            GameManger.instance.MiniMap_On();

        }
        else
        {
          Car_Manager.instance.NotEnoughCoins.SetActive(true);
        }

    }
    public void WatchAd_Rewarded()
    {
        PlayerPrefs.SetInt("Reward", 4);
        PlayerPrefs.SetInt("Bike_Reward", 1);
        MobileAdsExample.Instance.ShowRewardedVideo();
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
       // Car_Manager.instance.hudNav.PlayerCamera =tps;
    }
}
