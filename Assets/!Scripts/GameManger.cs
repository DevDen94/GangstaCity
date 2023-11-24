using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SWS;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Invector.vCharacterController;
using Invector;
using Invector.vShooter;
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

    //public GameManger MissionPanelParent;

    public GameObject[] Missions;
    public vGameController controller;
    [HideInInspector]
    public int selected_Mission;
    public Car_Manager cm;

    public GameObject ShopCanvas;
    public GameObject ShopGameObject;
    public GameObject ShopTrigger;
    
    public AudioSource src;
    public AudioClip btnCLIP;
    public AudioClip WinSound;
    public AudioClip LooseSound;

  
   public PlayerNavigation nav;
    public Text TaskText;
    public GameObject Task_Panel;
    public GameObject GunPick;
    public GameObject PoliceSirenFade;
    public GameObject JumpLongEffect;
    public GameObject Ref_Jump;
    public GameObject SprintReference;
    public GameObject SprintingEffect;
    [HideInInspector]
    public bool IsSprintOff;
    [HideInInspector]
    public bool isOneTime;
    Transform Des;
    
    public void Sprint_Call()
    {
        if (IsSprintOff )
        {
            SprintingEffect.SetActive(false);
            SprintReference.SetActive(false);
            isOneTime = false;
        }
        else {
            SprintingEffect.SetActive(true);
            SprintReference.SetActive(true);
            isOneTime = true;
           
        }
    }
    public void Jump_Long()
    {
        Instantiate(JumpLongEffect.transform, Ref_Jump.transform.position, Ref_Jump.transform.rotation);
    }
    public void BtnClick()
    {
        src.PlayOneShot(btnCLIP);
    }
    public void Win_Mission()
    {
        nav.GameEndl = true;
        MissionComplete.SetActive(true);
        src.PlayOneShot(WinSound);
    }
    public void Loose_Mission()
    {
        nav.GameEndl = true;
        MissionFailed.SetActive(true);
        src.PlayOneShot(LooseSound);
        Time.timeScale = 0f;
    }


    private void Start()
    {
        Time.timeScale = 1f;
        OFF_TPS();
        cm = GetComponent<Car_Manager>();
        


    
        instance = this;
        if (!PlayerPrefs.HasKey("Start"))
        {
            PlayerPrefs.SetInt("Start", 0);
            PlayerPrefs.SetInt("MissionNo",1);
        }
        //PlayerPrefs.SetInt("MissionNo", 2);
        selected_Mission = PlayerPrefs.GetInt("MissionNo");
       // controller.Spawn(SpawnPoints[PlayerPrefs.GetInt("MissionNo")].transform);
        SpawnPlayer();
        foreach (GameObject m in Missions)
        {
            m.SetActive(false);
        }
        Missions[selected_Mission].SetActive(true);
        cm.DestinationPoint = Missions[selected_Mission];
        cm.Set_NavigationDestination();
    }

    public void Spawner()
    {
        int rand = Random.Range(0, SpawnPoints.Length);
        TPS_Controls[1].transform.position = SpawnPoints[rand].transform.position;
    }
    public void Initialize_Mission(int mission)
    {
        Hud_Navigation.SetActive(false);
        selected_Mission = mission;
        Instantiate(missions[mission]);
        FadeScreen.SetActive(true);
        Invoke("Set_Instructions", 2f);
    }

    public void Resume()
    {
        Time.timeScale = 1f;
        src.PlayOneShot(btnCLIP);

    }
    public void Pasued_()
    {

        src.PlayOneShot(btnCLIP);
        Time.timeScale = 0f;
    }

    public void SpawnPlayer()
    {
        Set_TPS();
      //  int rand = Random.Range(0, SpawnPoints.Length);
        ThirdPersonPLayer.transform.position = SpawnPoints[PlayerPrefs.GetInt("MissionNo")].transform.position;
        ThirdPersonPLayer.transform.rotation = SpawnPoints[PlayerPrefs.GetInt("MissionNo")].transform.rotation;
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
        Time.timeScale = 1f;
        src.PlayOneShot(btnCLIP);
        SceneManager.LoadScene("GamePlay");
    }
    public void Home()
    {
        src.PlayOneShot(btnCLIP);
        SceneManager.LoadScene("MainMenu");
    }
    public void Continue()
    {
        Time.timeScale = 1f;
        src.PlayOneShot(btnCLIP);
        SceneManager.LoadScene("GamePlay");
    }
    [HideInInspector]
    public bool Is_Shop;
    public GameObject ShopPostion;
    public void Set_TPS() // Enable ThirdPerson Controller
    {
        if (Is_Shop)
        {
            ThirdPersonPLayer.transform.SetPositionAndRotation(ShopPostion.transform.position, ShopPostion.transform.rotation);
        }
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
        PlayerRef.transform.position = TPS_Controls[1].transform.position;
        Hud_Navigation.SetActive(false);
        HealthCanvas.SetActive(false);
        ControlFreakPanel.SetActive(false);
        for (int i = 0; i < TPS_Controls.Length; ++i)
        {
            TPS_Controls[i].SetActive(false);
        }
    }
 

    public GameObject Traffic_Reference;
    public GameObject PlayerRef;

}
