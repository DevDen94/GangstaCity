using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionFinished : MonoBehaviour
{
    public GameObject Mission;
    public void FinishMission()
    {

        GameManger.instance.Win_Mission();
        gameObject.SetActive(false);
        GameManger.instance.SpawnPlayer();
        GameManger.instance.InstructionsPanel.SetActive(false);
        GameManger.instance.MiniMap_Off();
    }
}
