using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SickscoreGames.HUDNavigationSystem;
public class DoorOpen : MonoBehaviour
{

    public Animator Player;
    public Animator Door;
    public GameObject Point;
    public static DoorOpen instance;

    public GameObject LookAt;

    public float speed;
    public bool isEject;
    
    private void Start()
    {
        isEject = false;


        Player.gameObject.transform.LookAt(LookAt.transform);
        instance = this;
    }
    private void Update()
    {
        speed = gameObject.transform.parent.GetComponent<RCC_CarControllerV3>().speed;
        if (isEject)
        {
      
            if (speed < 3)
            {
               
                Eject_Car();
                isEject = false;
            }
            else
            {
                Car_Manager.instance.brakeBtn.onClick.Invoke();
                Car_Manager.instance.brakeBtn.GetComponent<RCC_UIController>().pressing = true;
            }
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
           // Car_Manager.instance.Car = this;
            Car_Manager.instance.Carbutton_IN.SetActive(true);
           // Car_Manager.instance.Car = this;
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
        gameObject.transform.parent.GetComponent<Rigidbody>().isKinematic = false;
        gameObject.transform.parent.GetComponent<RCC_CarControllerV3>().StartEngine();
        Player.gameObject.transform.SetPositionAndRotation(Point.transform.position, Point.transform.rotation);
        gameObject.transform.parent.GetComponent<Check_Building>().SRC_Audios.SetActive(true);
        Car_Manager.instance.Set_ParentofTraffic(gameObject.transform.parent.gameObject);
 
        for (int i = 0; i < Car_Manager.instance.TPS_Controls.Length; ++i)
        {
            Car_Manager.instance.TPS_Controls[i].SetActive(false);
        }
      
        Player.gameObject.SetActive(true);
  
        Door.SetBool("Open", true);
        Player.SetInteger("Sit", 2);
        Invoke("AfterDelay", 1f);
    }

    void AfterDelay()
    {
 
        Door.SetBool("Open", false);

        gameObject.transform.parent.GetComponent<RCC_CarControllerV3>().enabled = true;
        Invoke("Set_CarActive", 2f);
    }

    void Set_CarActive()
    {
        if (!Car_Manager.instance.PoliceCop_On)
        {
            Car_Manager.instance.Carbutton_Out.SetActive(true);
            Debug.LogError("ON");
        }

    }
    public void Eject_Car()
    {

        // HudNavigationElment.SetActive(true);
        gameObject.transform.parent.GetComponent<Check_Building>().SRC_Audios.SetActive(false);
        gameObject.transform.parent.GetComponent<RCC_CarControllerV3>().enabled = false;
        gameObject.transform.parent.GetComponent<RCC_CarControllerV3>().KillEngine();
        gameObject.transform.parent.GetComponent<Rigidbody>().isKinematic = true;

        Door.SetBool("Open", true);
        Player.SetInteger("Sit", 1);
        Invoke("seco", 1f);
        Invoke("Eject_TPSActive", 2.5f);
    }
    void seco()
    {
        Door.SetBool("Open", false);
       // gameObject.transform.parent.GetComponent<Rigidbody>().isKinematic = false;
    }
    void Eject_TPSActive()
    {
        Car_Manager.instance.TPS_Controls[2].transform.position = Point.transform.position;
        Car_Manager.instance.TPS_Controls[2].transform.rotation = Point.transform.rotation;
        Car_Manager.instance.TPS_Controls[2].SetActive(true);
        Player.gameObject.SetActive(false);
        for (int i = 0; i < Car_Manager.instance.TPS_Controls.Length; ++i)
        {
            Car_Manager.instance.TPS_Controls[i].SetActive(true);
        }
       // pl.enabled = false;
        Car_Manager.instance.Set_ParentofTraffic(Car_Manager.instance.TPS_Controls[2]);
       

        Player.gameObject.transform.LookAt(LookAt.transform);
    }
   
}
