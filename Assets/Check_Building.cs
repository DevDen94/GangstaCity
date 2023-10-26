using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Check_Building : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer==LayerMask.NameToLayer("Building"))
        {

            Car_Manager.instance.Carbutton_Out.SetActive(false);
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Building"))
         {

            Car_Manager.instance.Carbutton_Out.SetActive(true);
        }
    }
  
}
