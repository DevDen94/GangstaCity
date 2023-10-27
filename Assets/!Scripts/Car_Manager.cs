using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SickscoreGames.HUDNavigationSystem;
using UnityEngine.UI;
using UnityEngine.AI;
public class Car_Manager : MonoBehaviour
{
    public GameObject[] TPS_Controls;
    public GameObject[] RCC_Controls;
    
    public static Car_Manager instance;
    public GameObject ThirdPerson;

    public GameObject Carbutton_IN;
    public GameObject Carbutton_Out;
    public DoorOpen Car;

    public GameObject Player_Character;
    public GameObject Traffic_Reference;
    public GameObject Player_Hud_Navigation;
    public HUDNavigationSystem hudNav;
    public Button brakeBtn;
    public GameObject DestinationCar;

    public NavmeshPathDraw navmesh;

    public Camera TPS_Camera;
    public Camera RCC_Camera;
    public void Set_ParentofTraffic(GameObject g)
    {
       // Traffic_Reference.transform.SetParent(g.transform);
        Player_Hud_Navigation.transform.SetParent(g.transform);
        Player_Hud_Navigation.transform.localPosition = Vector3.zero;
        //Traffic_Reference.transform.localPosition = Vector3.zero;
       // hudNav.PlayerController = g.transform;
    }

    void Start()
    {
        instance = this;
    }    

    public void Sit_in()
    {
        navmesh.gameObject.SetActive(false);
        Carbutton_IN.SetActive(false);
        Car.Drive_Car();
        navmesh.Player = Car.gameObject.transform.parent.gameObject.transform;
        hudNav.PlayerCamera = RCC_Camera;
        Car.gameObject.GetComponent<NavMeshAgent>().enabled = true;
        Car.Pointer.SetActive(false);
        navmesh.gameObject.SetActive(true);
    }
    public void Exit_Out()
    {
        Carbutton_Out.SetActive(false);
        navmesh.gameObject.SetActive(false);
        Car.isEject = true;
        Car.gameObject.GetComponent<NavMeshAgent>().enabled = false;
        navmesh.Player = Car.gameObject.transform.parent.gameObject.transform;
        hudNav.PlayerCamera = TPS_Camera;
        navmesh.gameObject.SetActive(true);
        Invoke("On_Pointer", 7f);
 
    }
    void On_Pointer()
    {
        Car.Pointer.SetActive(true);
    }
    public void Mission_Start()
    {

    }
}
