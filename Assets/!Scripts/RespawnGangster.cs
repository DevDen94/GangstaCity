using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Invector;
using Invector.vCharacterController;
public class RespawnGangster : MonoBehaviour
{
    public GameObject[] Gangster;
    public GameObject Canvas;
    public static RespawnGangster instance;
    public Button GangsterBtn;
    public Button FemaleGangsterBTn;
    public GameObject Gangster_SelecteddBtn;
    public GameObject Female_SelectedBtn;
    public GameObject FadeScreen;
    public GameManger gm;
    private bool isCounting = false;
    public GameObject Player_Current;
    public Text counterText;
    private float countdownTime = 3f;
    public GameObject Panel_;
    public GameObject Panel_G;
    public AudioClip sound;
    public Text CharacterText;
    public AudioClip femalebg;
    public AudioClip malebg;
    public vGameController gmm;
    public GameObject Shop;
    float health = 250;
    private void Start()
    {
        instance = this;
        gm = GetComponent<GameManger>();
        GangsterBtn.onClick.AddListener(Start_Counter);
        FemaleGangsterBTn.onClick.AddListener(Start_Counter);
    }
    private void Update()
    {
        if (isCounting)
        {
            Panel_G.SetActive(true);
            countdownTime -= Time.deltaTime;
            counterText.text = Mathf.RoundToInt(countdownTime).ToString();
            if (countdownTime <= 0)
            {
               
                Panel_.SetActive(false);
                Panel_G.SetActive(false);
                StopCountdown();
            }
        }
    }

    public void OpenGangsterClick()
    {
        Time.timeScale = 0f;
    }
    public void CloseGangsterClick()
    {
        Time.timeScale = 1f;
    }
    public GameObject CinematicCamera;
    public void Start_Counter()
    {
        Time.timeScale = 1f;
        isCounting = true;
        countdownTime = 0;
        if (gm.Tutorial)
        {
            TutorialScene.instance.cs.Text_Panel.SetActive(false);
            TutorialScene.instance.load_tutt();
        }
        
    }
  
    public void ChangeGangster()
    {
       
        if (gm.currentGangster == 0)
        {
            gm.currentGangster = 1;
            gm.ThirdPersonPLayer = Instantiate(Gangster[gm.currentGangster], Player_Current.transform.position, Player_Current.transform.rotation);
            Gangster_SelecteddBtn.SetActive(false);
            Female_SelectedBtn.SetActive(true);
            PlayerPrefs.SetInt("SelectedGangster", gm.currentGangster);
            CharacterText.text = "LISA";
            gm.BackgroundMusic.gameObject.SetActive(false);
            gm.BackgroundMusic.clip = malebg;
            gm.BackgroundMusic.gameObject.SetActive(true);
            if(!gm.Tutorial)
            {  
                gmm.playerPrefab = gm.ThirdPersonPLayer;
            }
            Shop.SetActive(false);
        }
        else
        {
            gm.currentGangster = 0;
            gm.ThirdPersonPLayer = Instantiate(Gangster[gm.currentGangster], Player_Current.transform.position, Player_Current.transform.rotation);
            Gangster_SelecteddBtn.SetActive(true);
            Female_SelectedBtn.SetActive(false);
            PlayerPrefs.SetInt("SelectedGangster", gm.currentGangster);
            CharacterText.text = "MICHAEL";
            gm.BackgroundMusic.gameObject.SetActive(false);
            gm.BackgroundMusic.clip = femalebg;
            gm.BackgroundMusic.gameObject.SetActive(true) ;
            if (!gm.Tutorial)
            {
                gmm.playerPrefab = gm.ThirdPersonPLayer;
            }
            Shop.SetActive(true);
        }
       
        Player_Current.GetComponent<PlayerNavigation>().player = gm.ThirdPersonPLayer.transform;
        gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().SpawningEffect.SetActive(true);
        Canvas.SetActive(false);
        foreach(GameObject a in gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().Meshes)
        {
           // a.SetActive(false);
        }
        Invoke("EnableCharacter", 0.4f);
        Invoke("EnableTps", 5f);
        gm.AssignPlayerReference();
        
        if (!gm.Tutorial)
        {
            GoogleMobileAdsController.Instance.ShowInterstitialAd();
        }
       
    }
    void StopCountdown()
    {
        isCounting = false;
        countdownTime = 0; 
        counterText.text = "0";
        FadeScreen.SetActive(true);
      //  Debug.LogError(gm.ThirdPersonPLayer.GetComponent<vHealthController>()._currentHealth);
       // Debug.LogError(gm.ThirdPersonPLayer.GetComponent<vHealthController>().currentHealth);
        health = gm.ThirdPersonPLayer.GetComponent<vHealthController>()._currentHealth;
        Destroy(gm.ThirdPersonPLayer);
        Invoke("ChangeGangster", 1f);
    }
    GameObject temp;
    void EnableCharacter()
    {
        Car_Manager.instance.PressGun(3);
        temp = Instantiate(CinematicCamera, gm.ThirdPersonPLayer.transform.position, gm.ThirdPersonPLayer.transform.rotation);
        foreach (GameObject a in gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().Meshes)
        {
          //  a.SetActive(true);
        }
        GetComponent<Car_Manager>().PressGun(3);
        gm.src.PlayOneShot(sound);

        if (PlayerPrefs.GetInt("Mode_2") == 2)
        {
            PoliceSystemActive.instance.playerTransform = gm.ThirdPersonPLayer.transform;
        }
    }
    void EnableTps()
    {
        gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().SpawningEffect.SetActive(false);
        gm.ThirdPersonPLayer.GetComponent<vHealthController>()._currentHealth = health;
        Canvas.SetActive(true);
        Destroy(temp);
      
    }

  
}
