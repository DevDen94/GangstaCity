using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AimBtn : MonoBehaviour
{
    public static AimBtn reg;
    public bool IsGameManagerEnable;
    public GameObject ManagerScript;
    public GameObject cars_ToBuy; 
    public AudioListener[] lis;
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
       
        reg = this;
        Invoke("Delay", 0.1f); 
        if (PlayerPrefs.GetFloat("Music") < 0.2)
        {
            foreach (AudioListener lis in lis)
            {
                lis.enabled = false;
            }
        }
    }
    void Delay()
    {
        if (ManagerScript != null)
        {
            ManagerScript.SetActive(true);
            cars_ToBuy.SetActive(true);
            IsGameManagerEnable = true;
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        Debug.LogError("Abbbcccccccccccccccccccc");
    }
}
