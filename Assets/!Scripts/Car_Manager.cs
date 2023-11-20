using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SickscoreGames.HUDNavigationSystem;
using UnityEngine.UI;
using UnityEngine.AI;
using UnityEditor;
using Invector.vItemManager;
using Invector.vShooter;
public class Car_Manager : MonoBehaviour
{
    public GameObject[] TPS_Controls;
    public GameObject[] RCC_Controls;
    
    public static Car_Manager instance;

    public GameObject Carbutton_IN;
    public GameObject Carbutton_Out;
    public DoorOpen Car;

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
       // Traffic_Reference.transform.SetParent(g.transform);
        Player_Hud_Navigation.transform.SetParent(g.transform);
        Player_Hud_Navigation.transform.localPosition = Vector3.zero;
        //Traffic_Reference.transform.localPosition = Vector3.zero;
       // hudNav.PlayerController = g.transform;
    }
    void sec()
    {
        vInventory.instance.ChangeInput(3);
    }
    void Start()
    {
        Invoke("sec", 0.1f);
    
        instance = this;
    }

    public void Set_NavigationDestination() {
        navmesh.destination = DestinationPoint.transform;
    }
    public void Sit_in()
    {
        Carbutton_IN.SetActive(false);
        hudNav.PlayerCamera = RCC_Camera;
        Car.Drive_Car();
        hudNav.PlayerCamera = RCC_Camera;
        Car.Pointer.SetActive(false);

    }
    public void Exit_Out()
    {
        Carbutton_Out.SetActive(false);
        Car.isEject = true;
        hudNav.PlayerCamera = TPS_Camera;
        Invoke("On_Pointer", 3f);
 
    }
    void On_Pointer()
    {
        Car.Pointer.SetActive(true);
    }
    public void Mission_Start()
    {

    }
    public GameObject InventoryPanel;
    public GameObject[] GunShootBtns;
    public GameObject[] Punchbtns;
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
            foreach(GameObject a in Punchbtns)
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
    public GameObject[] Selectors;
    /* public Text fpsText;
     public Text batchText;
     //public Text batchesText;

     private float deltaTime = 0.0f;

     void Update()
     {
         // Calculate FPS
         deltaTime += (Time.unscaledDeltaTime - deltaTime) * 0.1f;
         float fps = 1.0f / deltaTime;
         //int batchCount = UnityStats.batches;

             fpsText.text = "FPS: " + Mathf.Round(fps);
             //batchText.text = UnityEngine.Rendering.GraphicsSettings.batches

         // Display Batch Count
         *//*  if (batchesText != null)
           {
               int batchCount = UnityEngine.Rendering.GraphicsSettings.;
               batchesText.text = "Batches: " + batchCount;
           }*//*
     }*/
}
