using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SWS;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Invector.vCharacterController;
using Invector;
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

    public GameObject MissionComplete;
    public GameObject MissionFailed;

    public GameManger MissionPanelParent;

    public GameObject[] Missions;
    public vGameController controller;
    [HideInInspector]
    public int selected_Mission;
    private void Start()
    {
        Time.timeScale = 1f;
        controller.Spawn(SpawnPoints[0].transform);
        //TPS_Controls[1].GetComponent<vThirdPersonController>().maxHealth = 300;
        SpawnPlayer();
        instance = this;
        if (!PlayerPrefs.HasKey("Start"))
        {
            PlayerPrefs.SetInt("Start", 0);
            PlayerPrefs.SetInt("MissionNo",1);
        }
        //PlayerPrefs.SetInt("MissionNo", 2);
        selected_Mission = PlayerPrefs.GetInt("MissionNo");
        foreach(GameObject m in Missions)
        {
            m.SetActive(false);
        }
        Missions[selected_Mission].SetActive(true);
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


    public void Restart()
    {
        SceneManager.LoadScene("NewGame");
    }
    public void Home()
    {
        SceneManager.LoadScene("NewGame");
    }
    public void Continue()
    {
        PlayerPrefs.SetInt("MissionNo", PlayerPrefs.GetInt("MissionNo") + 1);
        SceneManager.LoadScene("NewGame");
    }

    public void Set_TPS() // Enable ThirdPerson Controller
    {
        for (int i = 0; i < TPS_Controls.Length; ++i)
        {
            TPS_Controls[i].SetActive(true);
        }
       // Set_ParentofTraffic(TPS_Controls[1]);
        Hud_Navigation.SetActive(true);
        HealthCanvas.SetActive(true);
        ControlFreakPanel.SetActive(true);
    }
    public void OFF_TPS()  // Disable ThirdPerson Controller
    {
        PlayerRef.transform.position = TPS_Controls[1].transform.position;
       // Set_ParentofTraffic(PlayerRef);
        Hud_Navigation.SetActive(false);
        HealthCanvas.SetActive(false);
        ControlFreakPanel.SetActive(false);
        for (int i = 0; i < TPS_Controls.Length; ++i)
        {
            TPS_Controls[i].SetActive(false);
        }
    }
  /*  public void Set_ParentofTraffic(GameObject g)
    {
        Traffic_Reference.transform.SetParent(g.transform);
        Traffic_Reference.transform.localPosition = Vector3.zero;
       // hudNav.PlayerController = g.transform;
    }*/

    public GameObject Traffic_Reference;
    public GameObject PlayerRef;

}
