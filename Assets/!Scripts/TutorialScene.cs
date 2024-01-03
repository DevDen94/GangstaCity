using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vItemManager;
using Invector.vShooter;
using Invector.vCamera;
using Invector;
public class TutorialScene : MonoBehaviour
{
    public GameObject ShopCamera;
    public GameObject PlayerCamera;
    public GameObject ManagerScript;
    public GameObject[] TutorialPanels;
    public GameObject FadeSScreen;
    int counter = 0;
    public GameObject Sprint;
    public CutSceneManager cs;
    public GameObject JoystickPath;
    public static TutorialScene instance;
    public GameObject UIPanel;
    public GameObject Hummar;
    public GameObject Box;
    public GameObject CharacterBtn;
    public GameObject PlayerNav;
    public GameObject Dest;
    private void Start()
    {
        counter_Start = false;
        instance = this;
        tutStart = false;
        PlayerPrefs.SetInt("Hummar_100", 1);
        //UIPanel.SetActive(false);
        //TPS_Control = GameManger.instance.ThirdPersonPLayer;
        // counter = 0;
        //Loadsec();
       
    }
    public GameObject[] EnablePanels;

    public void ShopCamera_Off() // load character in shop
    {
        ShopCamera.GetComponent<Animator>().SetBool("shopCamera", true);
        counter = 0;
        Invoke("LoadTutorial", 2f);
        FadeSScreen.SetActive(false); 

    }
    public void load_tutt()
    {
  
        Invoke("LoadTutorial", 10f);
    }
   public void load_tut()
    {
       
        Invoke("LoadTutorial", 2f);
    }
    bool tutStart;
    bool counter_Start;
    public GameObject Gangsterr;
    private void Update()
    {
        if (tutStart && counter <= 7)
        {
            if (GameManger.instance.ThirdPersonPLayer != null)
            {
                if (GameManger.instance.ThirdPersonPLayer.GetComponent<vHealthController>().currentHealth < 100)
                {
                    GameManger.instance.ThirdPersonPLayer.GetComponent<vHealthController>()._currentHealth = 250;
                }
            }
        }
    }
    public  void LoadTutorial()  // loadTutorials_ 1/1
    {
        if (counter_Start)
        {
            counter = counter + 1;
        }

        TutorialPanels[counter].SetActive(true);
        print(counter);

         switch (counter)
        {
            case 0:
                print(counter);
                counter_Start = true;
                break;
            case 1:
                cs.Text_Panel.SetActive(true);
                cs.TextField.text = cs.Instructions[counter].ToString();
                break;
            case 2:
                cs.Text_Panel.SetActive(true);
                cs.TextField.text = cs.Instructions[counter].ToString();
                JoystickPath.SetActive(true);
                break;
            case 3:
                EnablePanels[3].SetActive(true);
                break;
            case 4:
                cs.Text_Panel.SetActive(true);
                cs.TextField.text = cs.Instructions[counter].ToString();
                tutStart = true;
                break;
            case 5:
                cs.Text_Panel.SetActive(true);
                cs.TextField.text = cs.Instructions[counter].ToString();
                break;
            case 6:
                cs.Text_Panel.SetActive(true);
                cs.TextField.text = cs.Instructions[counter].ToString();
                Gangsterr.SetActive(true);
                PlayerNav.SetActive(true);
                break;
            case 7:
                CharacterBtn.SetActive(true);
                cs.Text_Panel.SetActive(true);
                cs.TextField.text = cs.Instructions[counter].ToString();
                
                break;
            case 8:
                cs.Text_Panel.SetActive(true);
                cs.TextField.text = cs.Instructions[counter].ToString();
                UIPanel.SetActive(true);
                Invoke("Off_HealthBar_Indicator", 2f);
                break;
            case 9:

                cs.Text_Panel.SetActive(true);
                cs.TextField.text = cs.Instructions[counter].ToString();
                Box.SetActive(false);
                Hummar.SetActive(true);
                Dest.SetActive(true);
                break;

            default:
                Debug.Log("Master");
                break;
        }
        
    }
    void Off_HealthBar_Indicator()
    {
        TutorialPanels[8].SetActive(true);
        cs.Text_Panel.SetActive(false);
        Invoke("LoadTutorial", 2f);
    }

    public void SelectCharacter()
    {
      
        Invoke("Load_Character", 0.4f);
        TutorialPanels[counter].SetActive(false);
        FadeSScreen.SetActive(true);
    }

    public void OffPanel(int i)
    {
        EnablePanels[i].SetActive(true);
        cs.Text_Panel.SetActive(false);
        if (i == 2 || i==6 ) return;
       
        Invoke("LoadTutorial", 3f);
    }
    public AudioSource src;
    public AudioClip clip;
    void Load_Character()
    {
        PlayerCamera.SetActive(true);
        ManagerScript.SetActive(true);
        Invoke("LoadTutorial", 1f);
        // GameObject a = GameObject.FindGameObjectWithTag("Clone");
        // a.SetActive(false);
        src.gameObject.SetActive(false);
        src.clip = clip;
        src.gameObject.SetActive(true);
    }
   
}
