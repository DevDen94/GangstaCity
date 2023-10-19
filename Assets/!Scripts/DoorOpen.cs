using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorOpen : MonoBehaviour
{

    public Animator Player;
    public Animator Door;
    public GameObject Point;
    public static DoorOpen instance;
    public GameObject Camera;
    public GameObject LookAt;

    private void Start()
    {
        Player.gameObject.transform.LookAt(LookAt.transform);
        instance = this;
    }
   
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            Car_Manager.instance.Car = this;
            Car_Manager.instance.Carbutton_IN.SetActive(true);
            Car_Manager.instance.Car = this;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            Car_Manager.instance.Car = null;
            Car_Manager.instance.Carbutton_IN.SetActive(false);
            Car_Manager.instance.Car = null;
        }
    }
    public void Drive_Car()
    {
        for (int i = 0; i < Car_Manager.instance.TPS_Controls.Length; ++i)
        {
            Car_Manager.instance.TPS_Controls[i].SetActive(false);
        }
        
        Player.gameObject.SetActive(true);
        Camera.SetActive(true);
        Door.SetBool("Open", true);
        Player.SetInteger("Sit", 2);
        Invoke("AfterDelay", 2.5f);
    }

    void AfterDelay()
    {
        Camera.SetActive(true);
        Door.SetBool("Open", false);
        for (int i = 0; i < Car_Manager.instance.RCC_Controls.Length; ++i)
        {
            Car_Manager.instance.RCC_Controls[i].SetActive(true);
        }
        gameObject.transform.parent.GetComponent<RCC_CarControllerV3>().enabled = true;
        Invoke("Set_CarActive", 2f);
    }

    void Set_CarActive()
    {
        Car_Manager.instance.Carbutton_Out.SetActive(true);
        Camera.SetActive(false);  
    }
    public void Eject_Car()
    {
        
        gameObject.transform.parent.GetComponent<RCC_CarControllerV3>().enabled = false;
        for (int i = 0; i < Car_Manager.instance.RCC_Controls.Length; ++i)
        {
            Car_Manager.instance.RCC_Controls[i].SetActive(false);
        }

        Camera.SetActive(true);
        Door.SetBool("Open", true);
        Player.SetInteger("Sit", 1);
        Invoke("seco", 2.3f);
        Invoke("Eject_TPSActive", 6f);
    }
    void seco()
    {
        Door.SetBool("Open", false);
    }
    void Eject_TPSActive()
    {
        Car_Manager.instance.ThirdPerson.transform.position = Point.transform.position;
        Car_Manager.instance.ThirdPerson.transform.rotation = Point.transform.rotation;
        Car_Manager.instance.ThirdPerson.SetActive(true);
        Player.gameObject.SetActive(false);
        for (int i = 0; i < Car_Manager.instance.TPS_Controls.Length; ++i)
        {
            Car_Manager.instance.TPS_Controls[i].SetActive(true);
        }

        Camera.SetActive(false);
        Player.gameObject.transform.LookAt(LookAt.transform);
    }  

}
