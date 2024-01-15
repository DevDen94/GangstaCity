using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishTrigger : MonoBehaviour
{
    public Mission_Script Script;
    private GameManger gm;

    public bool Ending_Cut;
  //  public GameObject OpenChestBtn;
    private void Start()
    {
        gm = GameManger.instance;
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
        
            if (PlayerPrefs.GetInt("MissionNo") == 5)
            {
                PlayerPrefs.SetInt("MissionNo", 1); 
                gameObject.SetActive(false);
            }
              
            if (!Script.EndingCutscene_Bool)
            {
                GameManger.instance.MissionComplete.SetActive(true);
            }
            gm.OFF_TPS();
            if(Script.Mission1_Door != null)
            {
                Script.Mission1_Door.enabled = true;
            }
            JetSpawner.instance.Button_In.gameObject.SetActive(false);
            Bike_ControlS.instance.BikeInBtn.gameObject.SetActive(false);

            if (!Ending_Cut)
            {
                Script.EndingCutScene.SetActive(true);
               // gm.InstructionsPanel.SetActive(true);
                //gm.StaringInstructions.text = gm.All_Instructions.Ending_Instructions[gm.selected_Mission].ToString();
            }else
            {
                GameManger.instance.Win_Mission();
            }
            LastScene();
           
        }
    }

    void LastScene()
    {
        if (gm.selected_Mission == 2)
        {
            Script.Gangster.GetComponent<Animator>().SetTrigger("Victory");
        }

    }
}
