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
    public GameObject[] TPS_Controls;
    public GameObject Rcc_Canvas;
    public GameObject Rcc_Header_Camera;
    
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
    public GameObject AutoFire_On;
    public GameObject AutoFire_Off;
    [HideInInspector]
    public bool IsShooterActive;
    [HideInInspector]
    public bool IsAuto_Enabled;
    [HideInInspector]
    public bool Snatch_Car;
    public GameObject CarHit;
    public void CarAttackOn()
    {
       if (!IsShooterActive)
        {
           OpenWeaponMode();
        }
        Car.PlayerShooter.AutofireMode = true;
        Car.PlayerShooter.FireModeOn();
        AutoFire_On.SetActive(false);
        AutoFire_Off.SetActive(true);
        IsAuto_Enabled = true;
    
    }
    public void AutoAttackOff()
    {
        AutoFire_On.SetActive(false);
        AutoFire_Off.SetActive(true);
        Car.PlayerShooter.AutofireMode = false;
        AutoFire_On.SetActive(true);
        AutoFire_Off.SetActive(false);
        IsAuto_Enabled = false;

    }
    public void OpenWeaponMode()
    {
        IsShooterActive = true;
        Car.Weapon_Main.SetActive(true);
        Car.Weapon_Main.GetComponent<Animator>().SetBool("upper", true);
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
        Player_Hud_Navigation.transform.SetParent(g.transform);
        Player_Hud_Navigation.transform.localPosition = Vector3.zero;

    }
    void sec()
    {
        vInventory.instance.ChangeInput(3);
    }
    void Start()
    {
        Invoke("sec", 0.1f);
        //attackon = false;
        instance = this;
        list.tpCameraStates[0].defaultDistance = 2.2f;
        list.tpCameraStates[0].height = 1f;
    }

    public void Set_NavigationDestination() {
        navmesh.destination = DestinationPoint.transform;
    }
    public void Sit_in()
    {
      
        Carbutton_IN.SetActive(false);
        hudNav.PlayerCamera = RCC_Camera;
        GameManger.instance.OFF_TPS();
        Rcc_Header_Camera.SetActive(true);

        if (AI_Car.Rcc_Car==true)
        {
            Car.Drive_Car();
            return;
        }
        Snatch_Car = true;
        target_RccCar= Instantiate(AI_Car.ReferenceRcc.transform, AI_Car.transform.position, AI_Car.transform.rotation);
        AI_Car.gameObject.transform.parent.gameObject.SetActive(false);
        RemoveAllMonoBehaviours(AI_Car.gameObject.transform.parent.gameObject);
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
        Carbutton_Out.SetActive(false);
        Car.isEject = true;
        hudNav.PlayerCamera = TPS_Camera;

    }

 
    public void OpenInventory()
    {
        GameManger.instance.BtnClick();
        InventoryPanel.SetActive(true);
        Time.timeScale = 0f;
    }
    
    public void PressGun(int no)
    {
        GameManger.instance.BtnClick();
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
            
        }
        

        if (no == 3)
        {
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

   

  
       
    

   public void ChangeTrack()
    {
      
        currentTrackIndex = (currentTrackIndex + 1) % tracks.Length;
        RadioMusic.clip = tracks[currentTrackIndex];
        RadioMusic.Play();
    }
    public Text fpsText;
    public Text batchText;
    //public Text batchesText;

    private float deltaTime = 0.0f;
    public PoliceSystemActive PoliceSystem;
    public GameObject PolicePanel;
    void Update()
    {
        if (Snatch_Car)
        {
            Snatch_Car = false;
            PoliceSystem.ispoliceCar_Active=true;
            PolicePanel.SetActive(true);
        }
    }
    
}
