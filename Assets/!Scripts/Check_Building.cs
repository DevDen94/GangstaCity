using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Check_Building : MonoBehaviour
{
    public Animator Player;
    public GameObject[] Gangsters;
    public Animator Door;
    public GameObject Point;
    public static Check_Building instance;
    public GameObject LookAt;
    public GameObject SRC_Audios;
    public float speed;
    public bool isEject;
    public GameObject Driver;
    public bool Is_DriverExit;
    public GameObject Driver_DownPoint;
    public AudioSource src;
    public AudioClip SoundEject;
    public GameObject Trigger;
    public GameObject Weapon_Main;
    public shootPlayer PlayerShooter;
     bool Car_Out;
    public bool is_HummerSpecial;
    private Damage_Script damage_;

    public bool PlayerCar;
   
    private void Start()
    {
        damage_ = GetComponent<Damage_Script>();
        Car_Out = false;
        Is_DriverExit = false;
        Car_Manager.instance.Car = this;
        SRC_Audios = gameObject.transform.GetChild(11).gameObject;
        if (!is_HummerSpecial)
        {
            Drive_Car();
            
        }
  
      
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer==LayerMask.NameToLayer("Building") || other.gameObject.layer == LayerMask.NameToLayer("Player"))
        {
           
                Car_Manager.instance.Carbutton_Out.SetActive(false);
           // Debug.LogError(other.gameObject.name);
            
        }
        
    }
    private void OnTriggerExit(Collider other)
    {
    if (other.gameObject.layer == LayerMask.NameToLayer("Building") || other.gameObject.layer == LayerMask.NameToLayer("Player"))
    {
        if (!Car_Manager.instance.PoliceCop_On)
        {
            Car_Manager.instance.Carbutton_Out.SetActive(true);
               // Debug.LogError("ON");
        }
    }
    }
    private void Update()
    {
        speed = GetComponent<RCC_CarControllerV3>().speed;
        if (isEject)
        {
            if (speed < 27)
            {

                Eject_Car();
                isEject = false;
            }
            else
            {
                Car_Manager.instance.brakeBtn.onClick.Invoke();
                Car_Manager.instance.brakeBtn.GetComponent<RCC_UIController>().pressing = true;
            }
        }
        if (Is_DriverExit)
        {
            if (Driver == null)
            {
                Is_DriverExit = false;
                return;
            }
         
            Driver.SetActive(true);
            Driver.transform.position = Vector3.MoveTowards(Driver.transform.position, Driver_DownPoint.transform.position, 3f * Time.deltaTime);
            if (Vector3.Distance(Driver.transform.position, Driver_DownPoint.transform.position) < 0.1f)
            {
                Is_DriverExit = false;
                Driver.transform.SetParent(Car_Manager.instance.navmesh.transform);
                Invoke("Destroy_Driver", 10f);
            }
        }


        if (Car_Out)
        {
            float distance = Vector3.Distance(this.transform.position, GameManger.instance.ThirdPersonPLayer.transform.position);
            if (distance > 50f)
            {
                Car_Out = false;
                Destroy(gameObject);
            }
        }
    }
    public GameObject TutorialObject;
    public GameObject NextTutorialObject;

void Destroy_Driver()
    {
        Destroy(Driver);
    }
   public void Drive_Car()
    {
        if (GameManger.instance.Tutorial)
        {
            TutorialScene.instance.cs.Text_Panel.SetActive(false);
            TutorialObject.SetActive(false);
            NextTutorialObject.SetActive(true);
         }
         
        Player = Gangsters[PlayerPrefs.GetInt("SelectedGangster")].GetComponent<Animator>();
     
        if (!Car_Manager.instance.AI_Car.Isdriver)
        {
            src.PlayOneShot(SoundEject);
            Is_DriverExit = true;
        }
        Car_Manager.instance.Your_CurrentCar_Health(damage_.damageValue);
        Car_Out = false;
        GetComponent<RCC_CarControllerV3>().StartEngine();
        GetComponent<Rigidbody>().isKinematic = false;
        damage_.isDamageEnabled = true;
        if (Car_Manager.instance.Right_Trigger_Enable)               // This statement only Plays when Player Trigger right side of Car
        {
            Car_Manager.instance.Fade_Screen_Rightdriver.SetActive(true);
            Car_Manager.instance.Rcc_Canvas.SetActive(true);
            Car_Manager.instance.RadioMusic.gameObject.SetActive(true);
            if (!GameManger.instance.Tutorial)
            {
                GameManger.instance.BackgroundMusic.gameObject.SetActive(false);
            }
            GetComponent<RCC_CarControllerV3>().enabled = true;
            Invoke("ExitCarOutBTn", 2f);
            Player.SetInteger("Sit", 2);
            gameObject.tag = "Car";
            SRC_Audios.SetActive(true);
            PlayerNavigation.instance.player = gameObject.transform;
            return;
        }

        Player.gameObject.transform.SetPositionAndRotation(Point.transform.position, Point.transform.rotation);
        //Car_Manager.instance.Set_ParentofTraffic(gameObject);
        Player.gameObject.SetActive(true);
        Door.SetBool("Open", true);
        Player.SetInteger("Sit", 2);
        Invoke("AfterDelay", 1f);
        gameObject.tag = "Car";
        PlayerNavigation.instance.player = gameObject.transform;
        SRC_Audios.SetActive(true);
    }
    void AfterDelay()
    {
        Car_Manager.instance.Rcc_Canvas.SetActive(true);
        Car_Manager.instance.RadioMusic.gameObject.SetActive(true);
        if (!GameManger.instance.Tutorial)
        {
            GameManger.instance.BackgroundMusic.gameObject.SetActive(false);
            GameManger.instance.Hud_Navigation.SetActive(true);
        }

        Door.SetBool("Open", false);
        GetComponent<RCC_CarControllerV3>().enabled = true;
        Invoke("ExitCarOutBTn", 2f);
    }
    void ExitCarOutBTn()
    {
        if (!Car_Manager.instance.PoliceCop_On)
        {
            Car_Manager.instance.Carbutton_Out.SetActive(true);
            //Debug.LogError("ON");
        }
    }
    public void Eject_Car()
    {
       
       
        damage_.isDamageEnabled = false;
        SRC_Audios.SetActive(false);
        Car_Manager.instance.RadioMusic.gameObject.SetActive(false);
        if (!GameManger.instance.Tutorial)
        {
            GameManger.instance.BackgroundMusic.gameObject.SetActive(true);
        }
        GetComponent<RCC_CarControllerV3>().enabled = false;
        GetComponent<RCC_CarControllerV3>().KillEngine();
        GetComponent<Rigidbody>().isKinematic = true;
        Car_Manager.instance.Rcc_Canvas.SetActive(false);
        if (Car_Manager.instance.Right_Trigger_Enable)               // This statement only Plays when Player Trigger right side of Car
        {
            Car_Manager.instance.Fade_Screen_Rightdriver.SetActive(true);
            Eject_TPSActive();
            Car_Manager.instance.Right_Trigger_Enable = false;
            return;
        }
        Door.SetBool("Open", true);
        Player.SetInteger("Sit", 1);
        Invoke("seco", 1f);
        Invoke("Eject_TPSActive", 2.5f);
        if (PlayerPrefs.GetInt("Mode_Select") == 2)
        {
            PoliceSystemActive.instance.PoliceCarPanel.SetActive(false);
        }
        // Invoke("SetTrafficCar", 3f);
    }
    void seco()
    {
        Door.SetBool("Open", false);

    }
    void Eject_TPSActive()
    {
        PlayerNavigation.instance.player = GameManger.instance.ThirdPersonPLayer.transform;
        Car_Manager.instance.Rcc_Header_Camera.SetActive(false);
        GameManger.instance.ThirdPersonPLayer.transform.position = Point.transform.position;
        GameManger.instance.ThirdPersonPLayer.transform.rotation = Point.transform.rotation;
        GameManger.instance.ThirdPersonPLayer.SetActive(true);
        Player.gameObject.SetActive(false);
        for (int i = 0; i < GameManger.instance.TPS_Controls.Length; ++i)
        {
            GameManger.instance.TPS_Controls[i].SetActive(true);
        }
       // Car_Manager.instance.Set_ParentofTraffic(GameManger.instance.ThirdPersonPLayer);
        Player.gameObject.transform.LookAt(LookAt.transform);
        Trigger.SetActive(true);
        Car_Out = true;
        gameObject.tag = "TrafficLight";
     //   gameObject.layer = LayerMask.NameToLayer("Default");
        gameObject.SetActive(false);
        Invoke("ofice", 0.2f);
        
    }
    void ofice()
    {
        gameObject.SetActive(true);
    }
    Transform Temp;
    public GameObject DUMMY_CAR;
}
