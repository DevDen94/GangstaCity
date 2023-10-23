using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionTrigger : MonoBehaviour
{
    public int missionNumber;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            gameObject.SetActive(false);
            GameManger.instance.Initialize_Mission(missionNumber);
            GameManger.instance.OFF_TPS();
           
        }
    }
}
