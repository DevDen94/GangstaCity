using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class MissionTrigger : MonoBehaviour
{
    public int missionNumber;
    public GameObject mission;
    private Mission_Script m;
   
    private void Start()
    {
     
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
          //  m.Load_Tasklist(m.TaskNo);
            gameObject.SetActive(false);
            GameManger.instance.Initialize_Mission(missionNumber);
            GameManger.instance.OFF_TPS();
            PlayerPrefs.SetInt("TPS", 1);
            PlayerPrefs.SetInt("MissionEnable", 1);
            PlayerPrefs.SetInt("M_", 1);

        }
        if (other.gameObject.tag == "Car")
        {
            PlayerPrefs.SetInt("MissionEnable", 1);
            gameObject.SetActive(false);
            GameManger.instance.Initialize_Mission(missionNumber);
            Car_Manager.instance.Rcc_Header_Camera.SetActive(false);
            Car_Manager.instance.RadioMusic.gameObject.SetActive(false);
            Car_Manager.instance.Car.gameObject.SetActive(false);
            Car_Manager.instance.Rcc_Canvas.SetActive(false);
            PlayerPrefs.SetInt("TPS", 0);
            PlayerPrefs.SetInt("M_", 1);

        }
    }
}
