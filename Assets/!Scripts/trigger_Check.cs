using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class trigger_Check : MonoBehaviour
{
    public Mission_Script mission;
    public GameObject Next_P;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            mission.NextCutScene.SetActive(true);
            GameManger.instance.OFF_TPS();
            gameObject.SetActive(false);
            mission.Start_CutScene();
            Car_Manager.instance.DestinationPoint = Next_P;
            Car_Manager.instance.Set_NavigationDestination();

        }
    }
}
