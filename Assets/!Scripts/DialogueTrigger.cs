using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueTrigger : MonoBehaviour
{
    public Mission_Script mission;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            gameObject.SetActive(false);
            mission.DialogueStart();
            mission.NextCutScene.SetActive(true);
            GameManger.instance.OFF_TPS();
            mission.Firts_Character.gameObject.SetActive(true);
        }
    }
}
