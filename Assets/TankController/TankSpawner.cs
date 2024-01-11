using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TankSpawner : MonoBehaviour
{
    public GameObject TankCanvas;
    public Button TankIn;
    public Button TankOut;
    public GameObject fade_Screen;
    public GameObject ReferenceTank;
    public GameObject SpawnPos;
    public GameObject Active_tank;
    public GameObject TankParent;
    public RTC_MainCamera cam; public PlayerNavigation playerNav;
    public GameObject TempTank;
    public static TankSpawner instance;
    public Camera tps;
    public Camera tankCam;
    GameManger gm;
    public string TankName;
    public GameObject BuyPanel;
    public GameObject TPS_Panel;
    public GameObject Cf2Panel;
    public GameObject[] inbtns;
    public GameObject Header_In;
    void Start()
    {
        instance = this;
        TankIn.onClick.AddListener(SpawnPlayerTank);
        TankOut.onClick.AddListener(RideOff);
        gm = GetComponent<GameManger>();
    }

    void SpawnPlayerTank()
    {
        if (PlayerPrefs.GetInt(TankName) == 0)
        {

            BuyPanel.SetActive(true);
        }
        else

        {
           foreach(GameObject a in inbtns)
            {
                a.SetActive(false);
            }
            gm.OFF_TPS();
            fade_Screen.SetActive(true);
            TempTank.SetActive(false);
            TankCanvas.SetActive(true);
            cam.gameObject.SetActive(true);
            Active_tank = Instantiate(ReferenceTank, SpawnPos.transform.position, SpawnPos.transform.rotation);
            cam.currentTank = Active_tank.transform;
            playerNav.player = Active_tank.transform;
            TankIn.gameObject.SetActive(false);
            TankOut.gameObject.SetActive(true);
            GameManger.instance.Hud_Navigation.SetActive(true);
            Car_Manager.instance.hudNav.PlayerCamera = tankCam;
            TPS_Panel.SetActive(false);
            Cf2Panel.SetActive(true);
            GameManger.instance.Char_switch.SetActive(false);
        }

    }
    public void TankBuySucessfull()
    {
        PlayerPrefs.SetInt(TankName, 1);
        BuyPanel.SetActive(false);
        SpawnPlayerTank();
    }
    public void BuyBike()
    {
        if (PlayerPrefs.GetInt("Cash") >= 1000)
        {
            PlayerPrefs.SetInt(TankName, 1);
            PlayerPrefs.SetInt("Cash", PlayerPrefs.GetInt("Cash") - 1000);
            GameManger.instance.CashText.text = PlayerPrefs.GetInt("Cash").ToString();
            BuyPanel.SetActive(false);
            SpawnPlayerTank();
        }
        else
        {
            Car_Manager.instance.NotEnoughCoins.SetActive(true);
        }

    }
    public void WatchAd_Rewarded()
    {
        PlayerPrefs.SetInt("Tank_Reward", 1);
        GoogleMobileAdsController.Instance.rewarded = true;
        GoogleMobileAdsController.Instance.ShowRewardedAd();
    }
    void RideOff()
    {
       
        cam.transform.SetParent(TankParent.transform);
        TempTank.SetActive(true);
        TempTank.transform.SetPositionAndRotation(Active_tank.transform.position, Active_tank.transform.rotation);
        Destroy(Active_tank);
        gm.FadeScreen_Long.SetActive(true);
        gm.Set_TPS();
        gm.ThirdPersonPLayer.transform.SetPositionAndRotation(TempTank.GetComponent<tank_Trigger>().PlayerSpawn.transform.position, TempTank.GetComponent<tank_Trigger>().PlayerSpawn.transform.rotation);
        playerNav.player = gm.ThirdPersonPLayer.transform;
        TankCanvas.SetActive(false);
        cam.gameObject.SetActive(false);
        TankOut.gameObject.SetActive(false);
        ControlFreak2.CFCursor.lockState = CursorLockMode.None;
        ControlFreak2.CFCursor.visible = true; 
        Car_Manager.instance.hudNav.PlayerCamera = tps;
        TPS_Panel.SetActive(true);
        Cf2Panel.SetActive(true);
        GameManger.instance.Char_switch.SetActive(true);

    }
}
