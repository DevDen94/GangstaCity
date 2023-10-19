using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Car_Manager : MonoBehaviour
{
    public GameObject[] TPS_Controls;
    public GameObject[] RCC_Controls;
    
    public static Car_Manager instance;
    public GameObject ThirdPerson;

    public GameObject Carbutton_IN;
    public GameObject Carbutton_Out;
    public DoorOpen Car;


 
    void Start()
    {
        instance = this;
    }    

    public void Sit_in()
    {
        Carbutton_IN.SetActive(false);
        Car.Drive_Car();
    }
    public void Exit_Out()
    {
        Carbutton_Out.SetActive(false);
        Car.Eject_Car();
    }
    public void Mission_Start()
    {

    }
}
