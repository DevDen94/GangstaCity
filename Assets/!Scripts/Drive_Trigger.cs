using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Drive_Trigger : MonoBehaviour
{
    public GameObject ReferenceRcc;
   
    public bool Isdriver = false;
    public bool Rcc_Car = false;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
           
            Car_Manager.instance.Carbutton_IN.SetActive(true);
            Car_Manager.instance.AI_Car = this;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            Car_Manager.instance.Carbutton_IN.SetActive(false);
            Car_Manager.instance.AI_Car = null;
        }
    }
}
