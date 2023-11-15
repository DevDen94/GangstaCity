using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mission_Script : MonoBehaviour
{
    public static Mission_Script instance;
    [Header("------Universal Entities------")]
    public RuntimeAnimatorController Dialogue_Cam;
    public Animator Firts_Character;
    public Animator Second_Character; 
    public RuntimeAnimatorController talking, talking1;
    public Dialogues_ Start_, End_;
    public GameObject NextCutScene;
    public GameObject EndingCutScene;
    public GameObject FinishPoint;
    public GameObject Gangster;
    public bool EndingCutscene_Bool;
    public GameObject FinishPoint_Navigator;
    public GameObject ActiveNavigator;

    [Header("------Mission 01------")]
    public float speed = 0.5f;
    public Animator Mission1_Door;
    public GameObject Bank;
    public GameObject Door;
    public GameObject TablePoint;
    [Header("------Mission 02------")]

    public RuntimeAnimatorController HealingController;
    [Header("------Mission 04------")]
    public int KillsCounter;
    public GameObject SpawnPoint;

    public int Gangster_DeathCount = 10;

    public void GangsterDead()
    {
        Gangster_DeathCount = Gangster_DeathCount - 1;
        Debug.LogError(Gangster_DeathCount);
        if (Gangster_DeathCount == 0)
        {
            FinishPoint.SetActive(true);
        }
    }
    private void Start()
    {
        instance = this;
        Car_Manager.instance.DestinationPoint = ActiveNavigator;
        Car_Manager.instance.Set_NavigationDestination();
    }
    public void Start_CutScene()
    {
        Firts_Character.gameObject.SetActive(true);
        Invoke("DoorOpen", 0.8f);
        Invoke("Move", 3f);
    }


    void DoorOpen()
    {
        Door.GetComponent<Animator>().enabled = true;
    }
    void Move()
    {
       
        Firts_Character.transform.position = TablePoint.transform.position;
        Firts_Character.transform.rotation = TablePoint.transform.rotation;
        Second_Character.gameObject.transform.LookAt(TablePoint.transform);
        Firts_Character.GetComponent<Animator>().runtimeAnimatorController = talking;
        Second_Character.GetComponent<Animator>().runtimeAnimatorController = talking;
    }
  public void DialogueStart()
    {
        
        GameManger.instance.DialogueCanvas.SetActive(true);
        GameManger.instance.DialogueCam.gameObject.SetActive(true);
        GameManger.instance.DialogueCam.GetComponent<Animator>().runtimeAnimatorController = Dialogue_Cam;
        Second_Character.GetComponent<Animator>().runtimeAnimatorController = talking;

    }

    public void FinalTask(int mission_no) // After Chat or fina
    {
        FinishPoint_Navigator.SetActive(true);
        if (mission_no == 1)
        {
            NextCutScene.SetActive(false);
            Firts_Character.gameObject.SetActive(false);
            Bank.SetActive(true);
            GameManger.instance.ThirdPersonPLayer.transform.position = TablePoint.transform.position;
            GameManger.instance.ThirdPersonPLayer.transform.rotation = TablePoint.transform.rotation;
        }
        if (mission_no == 2)
        {
            Firts_Character.gameObject.SetActive(false);
           // FinishPoint.SetActive(true);
        }
    }



    //Only for Mission5///
    public void Enabl3_FinishScreen()
    {
        Invoke("FourSecondDelay", 4f);
    }

    void FourSecondDelay()
    {
        GameManger.instance.Win_Mission();
    }
}
