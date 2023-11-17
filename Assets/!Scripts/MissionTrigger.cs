using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionTrigger : MonoBehaviour
{
    public int missionNumber;
    public GameObject mission;
    private Mission_Script m;
    private void Start()
    {
       // mission = GameObject.FindGameObjectWithTag("Mission");
        //m = mission.GetComponent<Mission_Script>();
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
          //  m.Load_Tasklist(m.TaskNo);
            gameObject.SetActive(false);
            GameManger.instance.Initialize_Mission(missionNumber);
            GameManger.instance.OFF_TPS();
           
        }
    }
}
