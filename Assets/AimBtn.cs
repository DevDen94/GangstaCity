using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AimBtn : MonoBehaviour
{
    public GameObject ManagerScript;
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
        Invoke("Delay", 0.1f);
    }
    void Delay()
    {
        if (ManagerScript != null)
        {
            ManagerScript.SetActive(true);
        }
    }
}
