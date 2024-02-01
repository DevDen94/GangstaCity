using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Drive_Trigger : MonoBehaviour
{
    public GameObject ReferenceRcc;
   
    public bool Isdriver = false;
    public bool Rcc_Car = false;
    public bool Is_hummer;
    public string nameofCar;

    public bool Is_RightTrigger;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            if (Is_hummer)
            {
                Car_Manager.instance.is_Hummer = true;
                Car_Manager.instance.Car_Name = nameofCar;
                if (gameObject.transform.GetChild(0) != null)
                {
                    gameObject.transform.GetChild(0).gameObject.SetActive(false);
                }
            }
            else
            {
                Car_Manager.instance.is_Hummer = false;
            }
           
            Car_Manager.instance.Carbutton_IN.SetActive(true);
         
            Car_Manager.instance.AI_Car = this;
            Car_Manager.instance.Car = gameObject.transform.parent.GetComponent<Check_Building>();
            if (Is_RightTrigger)
            {
                Car_Manager.instance.Right_Trigger_Enable = true;
            }
            else
            {
                Car_Manager.instance.Right_Trigger_Enable = false;
            }

        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            Car_Manager.instance.Carbutton_IN.SetActive(false);
            Car_Manager.instance.AI_Car = null;
            if (Is_RightTrigger)
            {
                Car_Manager.instance.Right_Trigger_Enable = false;
            }
        }
       
    }
}
