using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AimBtn : MonoBehaviour
{
    public static AimBtn reg;
    public bool IsGameManagerEnable;
    public GameObject ManagerScript;
    public GameObject[] Active_AfterPlayerSpawn;
    public GameObject cars_ToBuy; 
    public bool tutorial;
    public void AimOn()
    {
        Car_Manager.instance.PistolAim();
    }

    public void AimOff()
    {
        Car_Manager.instance.PistolOff();
    }

    private void Start()
    {
        if (tutorial)
            return;


        reg = this;
        Invoke("Delay", 0.5f); 
   
    }
    void Delay()
    {
        if (ManagerScript != null)
        {
            ManagerScript.SetActive(true);
           
            IsGameManagerEnable = true;
            Invoke("Span", 0.5f);
           
        }
    }
    void Span()
    {
        foreach (GameObject a in Active_AfterPlayerSpawn)
        {
            a.SetActive(true);
            cars_ToBuy.SetActive(true);
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        Debug.LogError("Abbbcccccccccccccccccccc");
    }
}
