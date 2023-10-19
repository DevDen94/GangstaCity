using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SWS;
using UnityEngine.UI;
public class GameManger : MonoBehaviour
{

    public GameObject[] SpawnPoints;
    public GameObject FadeScreen;
    public GameObject CutSceneScreen;
    public GameObject DialogueCanvas;
    public Camera DialogueCam;
    public static GameManger instance;
    public GameObject[] TPS_Controls;
    public Mission_Script[] missions;
   
    public GameObject ThirdPersonPLayer;
    public GameObject ControlFreakPanel;

    public GameObject HealthCanvas;
    public GameObject Hud_Navigation;
    public GameObject InstructionsPanel;
    public Text StaringInstructions;
    public Instructions All_Instructions;
    public GameObject FadeScreen_Long;


    public int selected_Mission;
    private void Start()
    {
        SpawnPlayer();
        instance = this;
    }
    public void Initialize_Mission(int mission)
    {
        Hud_Navigation.SetActive(false);
        selected_Mission = mission;
        Instantiate(missions[mission]);
        FadeScreen.SetActive(true);
        Invoke("Set_Instructions", 2f);
    }

    public void SpawnPlayer()
    {
        Set_TPS();
        int rand = Random.Range(0, SpawnPoints.Length);
        ThirdPersonPLayer.transform.position = SpawnPoints[rand].transform.position;
        ThirdPersonPLayer.transform.rotation = SpawnPoints[rand].transform.rotation;
    }
    void Set_Instructions()
    {
        InstructionsPanel.SetActive(true);
        StaringInstructions.text = All_Instructions.Starting_Instruction[selected_Mission].ToString();
    }
    public void MissionStart_() //After Starting Cutscene
    {
        InstructionsPanel.SetActive(false);
        CutSceneScreen.SetActive(false);
        ControlFreakPanel.SetActive(true);
        Set_TPS();
    }
    public void CutSceneStart()
    {
        FadeScreen.SetActive(true);
        CutSceneScreen.SetActive(true);
    }




    public void Set_TPS() // Enable ThirdPerson Controller
    {
        for (int i = 0; i < TPS_Controls.Length; ++i)
        {
            TPS_Controls[i].SetActive(true);
        }
        Hud_Navigation.SetActive(true);
        HealthCanvas.SetActive(true);
        ControlFreakPanel.SetActive(true);
    }
    public void OFF_TPS()  // Disable ThirdPerson Controller
    {
        Hud_Navigation.SetActive(false);
        HealthCanvas.SetActive(false);
        ControlFreakPanel.SetActive(false);
        for (int i = 0; i < TPS_Controls.Length; ++i)
        {
            TPS_Controls[i].SetActive(false);
        }
    }
    
}
