using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SickscoreGames.HUDNavigationSystem;
public class JetSpawner : MonoBehaviour
{
    public GameObject Canvas;
    public Button Button_In;
    public Button Button_Out;
    public GameObject fade_Screen;
    public GameObject[] ReferencePlayer;
    public GameObject SpawnPos;
    public GameObject Active_Player;
    public PlayerNavigation playerNav;
    public GameObject Temp;
    public static JetSpawner instance;
    public Camera tps;
    GameManger gm;
    public string JetName;
    public GameObject BuyPanel;
    public GameObject TPS_Panel;
    public GameObject Cf2Panel;
    public GameObject inbtns;
    public bool Off_Jet;
  
    void Start()
    {
        instance = this;
        Button_In.onClick.AddListener(SpawnPlayerTank);
        Button_Out.onClick.AddListener(RideOff);
        gm = GetComponent<GameManger>();
    }
    public GameObject Cam;
    void SpawnPlayerTank()
    {

        if (PlayerPrefs.GetInt(JetName) == 0)
        {

            BuyPanel.SetActive(true);
        }
        else

        {
            foreach (GameObject a in TankSpawner.instance.inbtns)
            {
                a.SetActive(false);
            }
            GameObject refplayer = ReferencePlayer[PlayerPrefs.GetInt("SelectedGangster")];
            gm.OFF_TPS();
            fade_Screen.SetActive(true);
            Temp.SetActive(false);
            Canvas.SetActive(true);

            Active_Player = Instantiate(refplayer, SpawnPos.transform.position, SpawnPos.transform.rotation);
            //Cam = Active_Player.transform.GetChild(0).gameObject;
            playerNav.player = Active_Player.transform;
            Button_In.gameObject.SetActive(false);
            Button_Out.gameObject.SetActive(true);
            GameManger.instance.Hud_Navigation.SetActive(true);
            TPS_Panel.SetActive(false);
            Cf2Panel.SetActive(true);
            GameManger.instance.Char_switch.SetActive(false);
            Car_Manager.instance.Carbutton_IN.gameObject.SetActive(false);
            Bike_ControlS.instance.BikeInBtn.gameObject.SetActive(false);
            TankSpawner.instance.TankIn.gameObject.SetActive(false);
        }

    }
    public void JetBuySucessfull()
    {
        PlayerPrefs.SetInt(JetName, 1);
        BuyPanel.SetActive(false);
        SpawnPlayerTank();
    }
    public void BuyJet()
    {
        if (PlayerPrefs.GetInt("Cash") >= 1000)
        {
            PlayerPrefs.SetInt(JetName, 1);
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
        //PlayerPrefs.SetInt("Reward", 1);
        PlayerPrefs.SetInt("Jet_Reward", 1);
        Implementation.instance.ShowRewardedVideo();
    }
    void RideOff()
    {
        Off_Jet = true;
        Temp.SetActive(true);
        Temp.transform.SetPositionAndRotation(Active_Player.transform.position, Active_Player.transform.rotation);
        Destroy(Active_Player);
        gm.FadeScreen_Long.SetActive(true);
        gm.Set_TPS();
        gm.ThirdPersonPLayer.transform.SetPositionAndRotation(Temp.GetComponent<JetTrigger>().PlayerSpawn.transform.position, Temp.GetComponent<JetTrigger>().PlayerSpawn.transform.rotation);
        playerNav.player = gm.ThirdPersonPLayer.transform;
        Canvas.SetActive(false);
        Button_Out.gameObject.SetActive(false);
        ControlFreak2.CFCursor.lockState = CursorLockMode.None;
        ControlFreak2.CFCursor.visible = true;
        Car_Manager.instance.hudNav.PlayerCamera = tps;
        TPS_Panel.SetActive(true);
        Cf2Panel.SetActive(true);
        GameManger.instance.Char_switch.SetActive(true);
       

    }
}
