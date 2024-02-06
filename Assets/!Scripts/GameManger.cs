using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SWS;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Invector.vCharacterController;
using Invector;
using Invector.vShooter;
using SickscoreGames.HUDNavigationSystem;
using UnityEngine.AddressableAssets;

public class GameManger : MonoBehaviour
{
    [SerializeField] private List<AssetReference> _scenes = new List<AssetReference>();
    public bool Tutorial;
    public GameObject[] Gangster;
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
    //public HUDNavigationSystem hudNav;
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

    private Car_Manager cm;

    public GameObject ShopCanvas;
    public GameObject ShopGameObject;
    public GameObject ShopTrigger;
    
    public AudioSource src;
    public AudioClip btnCLIP;
    public AudioClip WinSound;
    public AudioClip LooseSound;
    public AudioSource BackgroundMusic;


    public GameObject NavMesh_Object;
    public PlayerNavigation nav;
    public Text TaskText;
    public GameObject Task_Panel;
    public GameObject GunPick;
    public GameObject PoliceSirenFade;
    public GameObject JumpLongEffect;
    GameObject Ref_Jump;
    public GameObject SprintReference;
     GameObject SprintingEffect;
    public AudioSource Sprint_Effect;
    [HideInInspector]
    public bool IsSprintOff;
    [HideInInspector]
    public bool isOneTime;
    Transform Des;
    public Text CashText;


    public string Shop_InstanceKey;
    public _ShopManager sh;
    public GameObject Char_switch;
    public int[] MissionRewards;
    public int[] EnemiesKilled;
    public Text MissionRewardText;
    public Text EnemiesKilledText;
    public Text TotalText;
    public GameObject FadeScreenOutofbounds;
    public GameObject[] MoneyEffect;
    public AudioClip Money;
    public GameObject PasueBtn;
    public void DollarParticles()
    {
        foreach(GameObject a in MoneyEffect)
        {
            a.SetActive(true);
        }
  
        src.PlayOneShot(Money);
        Invoke("sec", 2f);
    }
    void sec()
    {
        foreach (GameObject a in MoneyEffect)
        {
            a.SetActive(false);
        }
    }

    public void Sprint_Call()
    {
       
        if (IsSprintOff )
        {
            SprintingEffect.SetActive(false);
            SprintReference.SetActive(false);
            isOneTime = false;
            Sprint_Effect.gameObject.SetActive(false);
        }
        else {
            SprintingEffect.SetActive(true);
            SprintReference.SetActive(true);
            isOneTime = true;
            Sprint_Effect.gameObject.SetActive(true);
        }
    }
    public bool Jump_Flag;
    public GameObject GamePlayAddress;
    public GameObject MainMenuAddress;
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
        
        PlayerPrefs.SetInt("M_", 0);
        MissionRewardText.text = MissionRewards[selected_Mission].ToString();
        EnemiesKilledText.text = EnemiesKilled[selected_Mission].ToString();
        int total = MissionRewards[selected_Mission] + EnemiesKilled[selected_Mission];
        TotalText.text = total.ToString();
        PlayerPrefs.SetInt("Cash", PlayerPrefs.GetInt("Cash") + total);
        if (PlayerPrefs.GetInt("Unlocked_Mission") != 10)
        {
            PlayerPrefs.SetInt("Unlocked_Mission", PlayerPrefs.GetInt("Unlocked_Mission") + 1);
        }
        Implementation.instance.ShowInterstitial();
        Firebase.Analytics.FirebaseAnalytics.LogEvent("mission_complete", "number", selected_Mission);
    }
    public void Loose_Mission()
    {
   
        PlayerPrefs.SetInt("M_", 0);
        nav.GameEndl = true;
        MissionFailed.SetActive(true);
        src.PlayOneShot(LooseSound);
        Time.timeScale = 0f;
        Implementation.instance.ShowInterstitial();
        Firebase.Analytics.FirebaseAnalytics.LogEvent("mission_failed", "number", selected_Mission);
    }
    [HideInInspector]
    public GameObject MissionActive;
    
    public void hEALTH()
    {
        ThirdPersonPLayer.GetComponent<vHealthController>()._currentHealth = 250;
    }

    public void Instantiate()
    {
        Destroy(ThirdPersonPLayer);
        currentGangster = 1;
        Instantiate(Gangster[currentGangster]);
       // Debug.LogError("Msg");
    }
   
    public void AssignPlayerReference()
    {
       // SprintReference = ThirdPersonPLayer.GetComponent<PlayerReferences>().SprintReference;
        Ref_Jump = ThirdPersonPLayer.GetComponent<PlayerReferences>().LongJumpPoint;
       // PlayerRef = ThirdPersonPLayer.GetComponent<PlayerReferences>().PlayerMinimap;
        SprintingEffect = ThirdPersonPLayer.GetComponent<PlayerReferences>().SprintEffect;
        Invoke("delay", 0.5f);

    }

    void delay()
    {
        cm.sm = ThirdPersonPLayer.GetComponent<vShooterManager>();
        //if (!Tutorial)
        //{
        //    hudNav.minimapScale = 1f;
       // }
       // cm.sec();
    }
    [HideInInspector]
   public int currentGangster = 0;
    public bool isJump_Act;
    private void Start()
    {
        
        if (!Tutorial)
        { 
           Addressables.LoadSceneAsync(_scenes[1], LoadSceneMode.Additive);
            isJump_Act = false;
        }
        level_failed = false;
        Jump_Flag = false;
        tps_check = false;
        PlayerPrefs.SetInt("SelectedGangster", 0);
        currentGangster = PlayerPrefs.GetInt("SelectedGangster");
        ThirdPersonPLayer = Instantiate(Gangster[currentGangster]);
        AssignPlayerReference();
       // GetComponent<RespawnGangster>().Player_Current = ThirdPersonPLayer;
        instance = this;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        Time.timeScale = 1f;
        GetComponent<Car_Manager>().enabled = true;
        cm = GetComponent<Car_Manager>();
        if (Tutorial)
        {
            ThirdPersonPLayer.transform.position = SpawnPoints[0].transform.position;
            ThirdPersonPLayer.transform.rotation = SpawnPoints[0].transform.rotation;
            return;
        }

       
        PlayerPrefs.SetInt("M_", 0);
        PlayerPrefs.SetInt("MissionEnable", 0);
        if (PlayerPrefs.GetInt("Mode_Select") == 1)
        {
            foreach (GameObject m in Missions)
            {
                m.SetActive(false);
            }
            selected_Mission = PlayerPrefs.GetInt("MissionNo");
            MissionActive = Missions[selected_Mission];
            Missions[selected_Mission].SetActive(true);
            cm.DestinationPoint = Missions[selected_Mission];
            Task_Panel.SetActive(true);
            cm.Set_NavigationDestination();
           
        }
       // PlayerPrefs.SetInt("Cash", 6000);
        CashText.text = PlayerPrefs.GetInt("Cash").ToString();
        SpawnPlayer();
        Invoke("tps_true", 5f);
        
        Set_Sounds();
        //Implementation.instance.ShowBanner();


    }
    bool tps_check;
    bool level_failed;
    void tps_true()
    {
        tps_check = true;
    }
    private void FixedUpdate()
    {
        if (ThirdPersonPLayer && tps_check)
        {
           
            if(ThirdPersonPLayer.GetComponent<vHealthController>().currentHealth <= 0 && !level_failed)
            {
                Loose_Mission();
                level_failed = true;
            }
            
        }
    }
    void Set_Sounds()
    {
        if (PlayerPrefs.GetInt("Music") == 1)
        {
            foreach(AudioSource a in Musiclistener)
            {
                a.enabled = true;
            }
        }
        else
        {
            foreach (AudioSource a in Musiclistener)
            {
                a.enabled = false;
            }
        }

    }
    public AudioSource[] Musiclistener;

    public void Spawner()
    {
        int rand = Random.Range(0, SpawnPoints.Length);
        ThirdPersonPLayer.transform.position = SpawnPoints[rand].transform.position;
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
        if (PlayerPrefs.GetInt("TPS") == 1)
        {
            ControlFreakPanel.SetActive(true);
            Set_TPS();
        }
        else
        {
            Car_Manager.instance.Rcc_Header_Camera.SetActive(true);
            Car_Manager.instance.RadioMusic.gameObject.SetActive(true);
            Car_Manager.instance.Car.gameObject.SetActive(true);
            Car_Manager.instance.Rcc_Canvas.SetActive(true);
            Hud_Navigation.SetActive(true);

        }
       
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
        if (PlayerPrefs.GetInt("Mode_Select") == 1)
        {
            SceneManager.LoadScene("MissionMode");
        }
        else
        {
            SceneManager.LoadScene("MissionMode");
        }
        
    }
    public void Home()
    {
        src.PlayOneShot(btnCLIP);
        Addressables.LoadSceneAsync(_scenes[0], LoadSceneMode.Single);
    }
    public void Continue()
    {
        Time.timeScale = 1f;
        src.PlayOneShot(btnCLIP);
        if (PlayerPrefs.GetInt("MissionNo") == 10)
        {
            Addressables.LoadSceneAsync(_scenes[0], LoadSceneMode.Single);
            return;
        }
        //Debug.LogError(PlayerPrefs.GetInt("MissionNo"));
        Debug.LogError(PlayerPrefs.GetInt("MissionNo"));
        PlayerPrefs.SetInt("MissionNo", selected_Mission + 1 );
        SceneManager.LoadScene("MissionMode");
    }
    
    [HideInInspector]
    public bool Is_Shop;
    public GameObject ShopPostion;
    //public HUDNavigationSystem hudNavv;
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
        ThirdPersonPLayer.SetActive(true);
     
        Hud_Navigation.SetActive(true);
      //  hudNavv.PlayerCamera = TPS_Controls[0].GetComponent<Camera>();
        HealthCanvas.SetActive(true);
        ControlFreakPanel.SetActive(true);
        TPS_Controls[5].SetActive(false); //Only for sprint

    }
    public void OFF_TPS()  // Disable ThirdPerson Controller
    {
        ThirdPersonPLayer.SetActive(false);
     //   PlayerRef.transform.position =ThirdPersonPLayer.transform.position;
        
        HealthCanvas.SetActive(false);
        ControlFreakPanel.SetActive(false);
        for (int i = 0; i < TPS_Controls.Length; ++i)
        {
            TPS_Controls[i].SetActive(false);
        }

        if (!Tutorial) { 
            Hud_Navigation.SetActive(false);
        }
       
    }
 

    public GameObject Traffic_Reference;
    public GameObject PlayerRef;

}
