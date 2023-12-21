using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SickscoreGames.HUDNavigationSystem;
using UnityEngine.UI;
using UnityEngine.AI;
using UnityEditor;
using Invector.vItemManager;
using Invector.vShooter;
using Invector.vCamera;
using Invector;
public class Car_Manager : MonoBehaviour
{
    public GameObject Rcc_Canvas;
    public GameObject Rcc_Header_Camera;
    public GameManger gameManager;
    public static Car_Manager instance;

    public GameObject Carbutton_IN;
    public GameObject Carbutton_Out;
    public DoorOpen Car_D;
    public Check_Building Car;
    public Drive_Trigger AI_Car;

    public GameObject Traffic_Reference;
    public GameObject Player_Hud_Navigation;
    public HUDNavigationSystem hudNav;
    public Button brakeBtn;
    public GameObject DestinationCar;

    public NavmeshPathDraw navmesh;

    public Camera Minimap_Camera;
    public Camera TPS_Camera;
    public Camera RCC_Camera;
    public GameObject DestinationPoint;
    public GameObject AimBtn;
    [HideInInspector]
    public vShooterManager sm;
    public Transform target_RccCar;
    public Transform target_PoliceCar;
    public GameObject InventoryPanel;
    public GameObject[] GunShootBtns;
    public GameObject[] Punchbtns;
    public GameObject[] Selectors;
    public AudioSource RadioMusic;
    public AudioClip[] tracks;
    public vThirdPersonCameraListData list;
    private int currentTrackIndex = 0;
    
    public GameObject WeaponOffBTN;
    public GameObject WeaponOnBtn;
    [HideInInspector]
    public bool IsShooterActive;
    [HideInInspector]
    public bool IsAuto_Enabled;
    [HideInInspector]
    public bool Snatch_Car;
    public GameObject CarHit;
    public bool is_Hummer;
    public GameObject Buy_Panel;
    public GameObject NotEnoughCoins;

    [HideInInspector]
    public bool Right_Trigger_Enable;
    public GameObject Fade_Screen_Rightdriver;
    public string Car_Name;
    public Slider CarHealth;
    public void Your_CurrentCar_Health(int dm)
    {
        CarHealth.value = dm;
    }
    public void CarAttackOn()
    {
       if (!IsShooterActive)
        {
           OpenWeaponMode();
        }
        Car.PlayerShooter.AutofireMode = true;
        Car.PlayerShooter.FireModeOn();
      
        IsAuto_Enabled = true;
    
    }
    public void AutoAttackOff()
    {
 
        Car.PlayerShooter.AutofireMode = false;
  
        IsAuto_Enabled = false;

    }
    public void OpenWeaponMode()
    {
        IsShooterActive = true;
        Car.Weapon_Main.SetActive(true);
        Car.Weapon_Main.GetComponent<Animator>().SetBool("upper", true);
    }
    public GameObject DriftBtn;
    public GameObject FunArcadeBtn;
    public void DrrifModeSelect()
    {
        RCC_Settings.Instance.behaviorSelectedIndex = 2;
        DriftBtn.SetActive(false);
        FunArcadeBtn.SetActive(true);
    }
    public void FunArcadeModeSelect()
    {
        RCC_Settings.Instance.behaviorSelectedIndex = 3;
        DriftBtn.SetActive(true);
        FunArcadeBtn.SetActive(false);
    }
    public void CloseWeaponMode()
    {
        IsShooterActive = false;
        Car.Weapon_Main.GetComponent<Animator>().SetBool("upper", false);
    }
    public void PistolAim()
    {
        AimBtn.SetActive(true);
    }
    public void PistolOff()
    {
        AimBtn.SetActive(false);
    }
    public void Set_ParentofTraffic(GameObject g)
    {
        GameManger.instance.Hud_Navigation.SetActive(true);
        Player_Hud_Navigation.transform.SetParent(g.transform);
        Player_Hud_Navigation.transform.localPosition = Vector3.zero;

    }
   public void sec()
    {
        vInventory.instance.ChangeInput(3);
    }
    void Start()
    {
        gameManager = GetComponent<GameManger>();
        sm = gameManager.ThirdPersonPLayer.GetComponent<vShooterManager>();
        Invoke("sec", 0.3f);
        //attackon = false;
        instance = this;
        list.tpCameraStates[0].defaultDistance = 2.2f;
        list.tpCameraStates[0].height = 1f;
     
       // GameManger.instance.TPS_Controls[4] = GameObject.FindGameObjectWithTag("Clone");
    }

    public void Set_NavigationDestination() {
        navmesh.destination = DestinationPoint.transform;
    }
    public void Sit_in()
    {
        if (is_Hummer && PlayerPrefs.GetInt(Car_Name)==0){
            //Debug.LogError(PlayerPrefs.GetInt(Car_Name));
           // Debug.LogError(Car_Name);
            Buy_Panel.SetActive(true);
        }
        else
        {
            Rcc_Header_Camera.SetActive(true);
            Carbutton_IN.SetActive(false);
            if (!gameManager.Tutorial)
            {
                hudNav.PlayerCamera = RCC_Camera;
            }
           
            gameManager.OFF_TPS();
            if (AI_Car.Rcc_Car == true)
            {
                Car.Drive_Car();
                Rcc_Header_Camera.GetComponent<RCC_Camera>().cameraTarget.playerVehicle = Car.gameObject.GetComponent<RCC_CarControllerV3>();
                return;
            }
            Snatch_Car = true;
            target_RccCar = Instantiate(AI_Car.ReferenceRcc.transform, AI_Car.transform.position, AI_Car.transform.rotation);
            AI_Car.gameObject.transform.parent.gameObject.SetActive(false);
            RemoveAllMonoBehaviours(AI_Car.gameObject.transform.parent.gameObject);
        }
      
    }
    public void CarBuySucessfull()
    {
        PlayerPrefs.SetInt(Car_Name, 1);
        Rcc_Header_Camera.SetActive(true);
        Carbutton_IN.SetActive(false);
        Buy_Panel.SetActive(false);
        hudNav.PlayerCamera = RCC_Camera;
        gameManager.OFF_TPS();
        if (AI_Car.Rcc_Car == true)
        {
            Car.Drive_Car();
            Rcc_Header_Camera.GetComponent<RCC_Camera>().cameraTarget.playerVehicle = Car.gameObject.GetComponent<RCC_CarControllerV3>();
            return;
        }
    }
    public void WatchAd_BuyCar() /// PlaceRewardedAd
    {
      //  GoogleAdMobController.instance.ShowRewardedAd();
    }
    public void BuyCar()
    {
        if (PlayerPrefs.GetInt("Cash") >= 1000)
        {
            PlayerPrefs.SetInt(Car_Name, 1);
            PlayerPrefs.SetInt("Cash", PlayerPrefs.GetInt("Cash") - 1000);
            gameManager.CashText.text = PlayerPrefs.GetInt("Cash").ToString();
            Rcc_Header_Camera.SetActive(true);
            Carbutton_IN.SetActive(false);
            Buy_Panel.SetActive(false);
            hudNav.PlayerCamera = RCC_Camera;
            gameManager.OFF_TPS();
            if (AI_Car.Rcc_Car == true)
            {
                Car.Drive_Car();
                Rcc_Header_Camera.GetComponent<RCC_Camera>().cameraTarget.playerVehicle = Car.gameObject.GetComponent<RCC_CarControllerV3>();
                return;
            }
        }
        else
        {
            NotEnoughCoins.SetActive(true);
        }

    }
    public void WatchAd()
    {

    }

    void RemoveAllMonoBehaviours(GameObject obj)
    {
        MonoBehaviour[] scripts = obj.GetComponents<MonoBehaviour>();

        foreach (var script in scripts)
        {
            if (script != this) // Exclude this script from being removed
            {
                Destroy(script);
            }
        }
    }
    public void Exit_Out()
    {
        WeaponOffBTN.SetActive(false);
     
        WeaponOnBtn.SetActive(true);
        Carbutton_Out.SetActive(false);
        Car.isEject = true;
        hudNav.PlayerCamera = TPS_Camera;

    }

 
    public void OpenInventory()
    {
        gameManager.BtnClick();
        InventoryPanel.SetActive(true);
        Time.timeScale = 0f;
    }
    
    public void PressGun(int no)
    {
        gameManager.BtnClick();
        InventoryPanel.SetActive(false);
        Time.timeScale = 1f;
        foreach (GameObject a in Selectors)
        {
            a.SetActive(false);
            
        }
        Selectors[no].SetActive(true);
        vInventory.instance.ChangeInput(no);
        sm.alwaysAiming = true;

        if (no == 3)
        {
            sm.alwaysAiming = false;
            list.tpCameraStates[0].defaultDistance = 2.2f;
            list.tpCameraStates[0].height = 1f;
            foreach (GameObject a in Punchbtns)
            {
                a.SetActive(true);
            }
            foreach(GameObject a in GunShootBtns)
            {
                a.SetActive(false);
            }
            Invoke("DestroyWeapon", 0.1f);
        }
        else
        {
            list.tpCameraStates[0].defaultDistance = 2f;
            list.tpCameraStates[0].height = 1.7f;
            foreach (GameObject a in Punchbtns)
            {
                a.SetActive(false);
            }
            foreach (GameObject a in GunShootBtns)
            {
                a.SetActive(true);
            }
        }
       
    }

    void DestroyWeapon()
    {
        if (gameManager.ThirdPersonPLayer.GetComponent<PlayerReferences>().DefaultPanel.transform.childCount > 0)
        {
            Destroy(gameManager.ThirdPersonPLayer.GetComponent<PlayerReferences>().DefaultPanel.transform.GetChild(0).gameObject);
            Invoke("DestroyWeapon", 0.4f);
        }
     
       // PressGun(3);
    }
   
  
       
    

   public void ChangeTrack()
    {
      
        currentTrackIndex = (currentTrackIndex + 1) % tracks.Length;
        RadioMusic.clip = tracks[currentTrackIndex];
        RadioMusic.Play();
    }
   // public Text fpsText;
   //// public Text batchText;
    //public Text batchesText;

    private float deltaTime = 0.0f;
    public PoliceSystemActive PoliceSystem;
    public GameObject PolicePanel;
    void Update()
    {
        if (Snatch_Car)
        {
            Snatch_Car = false;
            if (PoliceSystem.isPolice_CarTimer && PlayerPrefs.GetInt("Mode_Select") == 2)
            {
                PoliceSystem.ispoliceCar_Active = true;
                PolicePanel.SetActive(true);
                PoliceCop_On = true;
            }
          
        }
    }
    public bool PoliceCop_On;
    
}
