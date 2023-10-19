using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class trigger_Check : MonoBehaviour
{
    public Mission_Script mission;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            mission.NextCutScene.SetActive(true);
            GameManger.instance.OFF_TPS();
            gameObject.SetActive(false);
            mission.Start_CutScene();
        }
    }
}
