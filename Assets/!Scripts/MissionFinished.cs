using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionFinished : MonoBehaviour
{
    public GameObject Mission;
    public void FinishMission()
    {
        
        GameManger.instance.MissionComplete.SetActive(true);
        Time.timeScale = 0f;
        gameObject.SetActive(false);
        GameManger.instance.SpawnPlayer();
        GameManger.instance.InstructionsPanel.SetActive(false);
        Destroy(Mission);
    }
}
