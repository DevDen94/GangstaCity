using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SickscoreGames.HUDNavigationSystem;
using UnityEngine.UI;
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
    public void Set_ParentofTraffic(GameObject g)
    {
        Traffic_Reference.transform.SetParent(g.transform);
        Traffic_Reference.transform.localPosition = Vector3.zero;
        hudNav.PlayerController = g.transform;
    }

    void Start()
    {
        instance = this;
    }    

    public void Sit_in()
    {
        Carbutton_IN.SetActive(false);
        Car.Drive_Car();
        Car.Pointer.SetActive(false);
    }
    public void Exit_Out()
    {
        Carbutton_Out.SetActive(false);

        Car.isEject = true;
        Invoke("On_Pointer", 3f);
 
    }
    void On_Pointer()
    {
        Car.Pointer.SetActive(true);
    }
    public void Mission_Start()
    {

    }
}
