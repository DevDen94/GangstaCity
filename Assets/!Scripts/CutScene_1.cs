using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutScene_1 : MonoBehaviour
{
    public Mission_Script script;
    public GameObject CutSceneObjects;

    public void EndCutScene()
    {
        GameManger.instance.Set_TPS();
    }
    public void Start_Level()
    {
        gameObject.SetActive(false);
        CutSceneObjects.gameObject.SetActive(false);
        GameManger.instance.MissionStart_();
    }

    public void TransfromTioGIRL()
    {
        script.Second_Character.transform.LookAt(script.TablePoint.transform);
    }
    public void DialogueEnter()
    {
        
        GameManger.instance.FadeScreen.SetActive(false);
        GameManger.instance.CutSceneScreen.SetActive(false);
        gameObject.SetActive(false);
        script.DialogueStart();
    }
}
