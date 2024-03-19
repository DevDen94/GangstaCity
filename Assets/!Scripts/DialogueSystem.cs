using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class DialogueSystem : MonoBehaviour
{
    public static DialogueSystem instance;
    private Dialogues_ Start_,End_;
    public Text LeftDialogue_Box;
    public Text RightDialogue_Box;

    public GameObject LeftPanel;
    public GameObject RightPanel;

    private GameObject DialogueBoxCamera;
    public GameObject DialogueBoxCanvas;
    private Animator Start_Character;
    private Animator EndCharacter;
 
    public int start_count = 0;
    public int end_count = 0;
    public GameManger GM;
    void Start()
    {
        Start_ = GM.missions[GM.selected_Mission].Start_;
        End_ = GM.missions[GM.selected_Mission].End_;
        Start_Character = GM.missions[GM.selected_Mission].Firts_Character;
        EndCharacter= GM.missions[GM.selected_Mission].Second_Character;
        DialogueBoxCamera = GM.DialogueCam.gameObject;
        Lets_Talk();
        instance = this;
    }
    private void OnEnable()
    {
        GameManger.instance.MiniMap_Off();
    }
    private void OnDisable()
    {
        GameManger.instance.MiniMap_On();
    }
    public void Lets_Talk()
    {
        DialogueBoxCanvas.SetActive(true);
        DialogueBoxCamera.SetActive(true);
        LeftDialogue_Box.text = Start_.Dialogues[start_count].ToString();
       
    }

    public void NextInstructions(int no)
    {
        DialogueBoxCamera.GetComponent<Animator>().SetInteger("Pose", no);
        if (no == 1)
        {
            int rand = Random.Range(0, 4);
            EndCharacter.SetInteger("Value", rand);
            RightPanel.SetActive(true);
            LeftPanel.SetActive(false);
            RightDialogue_Box.text = End_.Dialogues[end_count].ToString();
            start_count++;
        }
        else
        {
          
            if (end_count >= End_.counter)
            {
                GameManger.instance.Task_Panel.SetActive(true);
                Mission_Script.instance.FinalTask(GM.selected_Mission);
                DialogueBoxCanvas.SetActive(false);
                DialogueBoxCamera.SetActive(false);
                GameManger.instance.PasueBtn.SetActive(true);
                GM.Set_TPS();
                JetSpawner.instance.inbtns.SetActive(true);
                return;
            }
            end_count++;
            int rand = Random.Range(0, 4);
            Start_Character.SetInteger("Value", rand);
            RightPanel.SetActive(false);
            LeftPanel.SetActive(true);
            LeftDialogue_Box.text = Start_.Dialogues[start_count].ToString();
           
           
        }
        
    }
}
