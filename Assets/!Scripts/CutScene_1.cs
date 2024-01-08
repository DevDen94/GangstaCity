using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutScene_1 : MonoBehaviour
{
    public Mission_Script script;
    public GameObject CutSceneObjects;
    public GameObject Mission2;
    private void Start()
    {
        GameManger.instance.Task_Panel.SetActive(false);
    }
    public void EndCutScene()
    {
        GameManger.instance.Set_TPS();
    }
    public void Start_Level()
    {
        TankSpawner.instance.inbtns.SetActive(true);
        GameManger.instance.Task_Panel.SetActive(true);
        CutSceneObjects.gameObject.SetActive(false);
        GameManger.instance.MissionStart_();

        if (script.HealingController != null)
        {
            script.Gangster.GetComponent<Animator>().runtimeAnimatorController = script.HealingController;
        }
        gameObject.SetActive(false);

        if (Mission2 != null)
        {
            Mission2.SetActive(false);
            Debug.LogError("Objee");
        }
      
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
