using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using UnityEngine.AddressableAssets;
using Gley.MobileAds.Internal;

public class MainMenu : MonoBehaviour
{
    public GameObject LoadingPanel;
    public AudioClip btnClick;
    public AudioSource src;
    public AudioSource soundSrc;
    public Text shop_cash;
    public Splash LoadingScene_Name;
    int unlockedLevels;


    public string[] GeneralTitles;
    public string[] DetailInstructions;
    public Text Title;
    public Text Description;

    public static MainMenu instance;
    [SerializeField] private List<AssetReference> _scenes = new List<AssetReference>();
    private void Start()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        ControlFreak2.CFCursor.lockState = CursorLockMode.None;
        ControlFreak2.CFCursor.visible = true;
        instance = this;
        Time.timeScale = 1f;
        if (!PlayerPrefs.HasKey("qabe"))
        {
            PlayerPrefs.SetInt("Tutorial_Finished", 0);
            PlayerPrefs.SetInt("SFX", 1);
          //  PlayerPrefs.SetInt("Music", 1);
            PlayerPrefs.SetInt("Unlocked_Mission", 1);
            PlayerPrefs.SetInt("Cash", 1000);
            PlayerPrefs.SetInt("qabe", 12);
            PlayerPrefs.SetInt("Tut_Called", 0);
            PlayerPrefs.SetInt("Controls", 2);
            PlayerPrefs.SetFloat("SelectedFPS",60);
            PlayerPrefs.SetInt("QualityLevel", 1);
            PlayerPrefs.SetFloat("MusicVolume", 0.7f);
            selectBtn_Mission.interactable = false;
        }
        Submitbtn.SetActive(false);

        if (PlayerPrefs.GetInt("Tutorial_Finished") == 1)
        {
            selectBtn_Mission.interactable = true;
        }
        float savedFPS = PlayerPrefs.GetFloat("SelectedFPS");
        SetFPS(savedFPS);
        fpsSlider.onValueChanged.AddListener(UpdateFPS);

        float savedvolume = PlayerPrefs.GetFloat("MusicVolume");
        set_Vol(savedvolume);
        musicVolumeSlider.onValueChanged.AddListener(SetMusicVolume);

        unlockedLevels = PlayerPrefs.GetInt("Unlocked_Mission");
        Mission_Unlocked();
        LoadSettings();
        shop_cash.text = PlayerPrefs.GetInt("Cash").ToString();
        Set_SoundMusic();
        MobileAdsExample.Instance.ShowBanner();
    }

    public GameObject SoundOn;
    public GameObject SoundOFF;
    public GameObject MusicOn;
    public GameObject MusicOff;

    public void MissionMode()
    {
        Addressables.LoadSceneAsync(_scenes[0], LoadSceneMode.Single);
    }
    void Set_SoundMusic()
    {
        if (PlayerPrefs.GetInt("SFX") == 1)
        {
            soundSrc.enabled = true;
            SetSoundsOn();
        }
        else
        {
            soundSrc.enabled = false;
            SetSounds_Off();
        }


       // if (PlayerPrefs.GetInt("Music") == 1)
      //  {
         //   src.enabled = true;
        //    SetMusicOn();
       // }
       // else
       // {
       //     src.enabled = false;
       //     SetMusicOff();
      //  }

    }
    public void Start_Btn()
    {
        ModeSelectionPanel.SetActive(true);
        MobileAdsExample.Instance.ShowInterstitial();
        //Firebase.Analytics.FirebaseAnalytics.LogEvent("mainmenu_startbtn");
    }
    private void FixedUpdate()
    {
        if (!ControlFreak2.CFCursor.visible)
        {
            ControlFreak2.CFCursor.lockState = CursorLockMode.None;
            ControlFreak2.CFCursor.visible = true;
        }
    }
    public void BtnClick()
    {
        soundSrc.PlayOneShot(btnClick);
    }
    public void OnExit()
    {
        Application.Quit();
    }
  
  
  
    public void SetSoundsOn()
    {
        PlayerPrefs.SetInt("SFX", 1);
        SoundOn.SetActive(true);
        SoundOFF.SetActive(false);
        soundSrc.enabled = true;
    }
    public void SetSounds_Off()
    {
        PlayerPrefs.SetInt("SFX", 0);
        SoundOn.SetActive(false);
        SoundOFF.SetActive(true);
        soundSrc.enabled = false;
    }
    public void SetMusicOn()
    {
        PlayerPrefs.SetInt("Music", 1);
        MusicOn.SetActive(true);
        MusicOff.SetActive(false);
        src.enabled = true;
    }
    public void SetMusicOff()
    {
        PlayerPrefs.SetInt("Music", 0);
        MusicOn.SetActive(false);
        MusicOff.SetActive(true);
        src.enabled = false;
    }
    public void LoadLevel(int i = 1)
    {
        Level_no.text = i.ToString() ;
        PlayerPrefs.SetInt("MissionNo", i);
        Title.text = GeneralTitles[i-1].ToString();
        Description.text = DetailInstructions[i-1].ToString();
        Submitbtn.SetActive(true);
       // Firebase.Analytics.FirebaseAnalytics.LogEvent("mission","number",i);

    }
    public GameObject Submitbtn;
    public Text Level_no;
    public void loadInst(int i)
    {
        Level_no.text = i.ToString();
        Submitbtn.SetActive(false);
        Title.text = GeneralTitles[i-1].ToString();
        Description.text = DetailInstructions[i-1].ToString();
    }
    public void SceneChange()
    {
        LoadingPanel.SetActive(true);
        LoadingScene_Name.sceneToLoad = "MissionMode";
        src.PlayOneShot(btnClick);
    }
    public GameObject levelSelectionPanel;
    public GameObject ModeSelectionPanel;
    public GameObject NotEnoughCoins;
    public GameObject Mode2_Screen;
    public Button[] levels;
    public GameObject[] lockedBtn;
    public Button selectBtn_Mission;
    void Mission_Unlocked()
    {
        foreach(GameObject a in lockedBtn)
        {
            a.SetActive(true);
            
        }
        for(int i = 1; i <= unlockedLevels; i++)
        {
            lockedBtn[i].SetActive(false);
        }
    }
    public GameObject Address;
    public GameObject Address_Panel;
    public void StartTutCalled()
    {
        if (PlayerPrefs.GetInt("Tut_Called") == 0)
        {
            LoadingPanel.SetActive(true);
            LoadingScene_Name.sceneToLoad = "Tutorial";
            Time.timeScale = 1f;
        }
    }
    public void ModeBack()
    {
        PlayerPrefs.SetInt("RewardedMode", 0);
    }
    public void ModeSelection(int i = 1)
    {
        if (i == 1)
        {
            ModeSelectionPanel.SetActive(false);
            levelSelectionPanel.SetActive(true);
            PlayerPrefs.SetInt("Mode_Select", 1);
           // Firebase.Analytics.FirebaseAnalytics.LogEvent("mode_1");
        }
        else
        {
            if (PlayerPrefs.GetInt("Mode_2") == 1)
            {
               
                LoadingScene_Name.sceneToLoad = "MissionMode";
                LoadingPanel.SetActive(true);
                PlayerPrefs.SetInt("Mode_Select", 2);
                //Firebase.Analytics.FirebaseAnalytics.LogEvent("mode_2");
            }
            else
            {
                Mode2_Screen.SetActive(true);
            }
        }
        src.PlayOneShot(btnClick);
    }
    public void Unlocked_Mode()
    {
        if (PlayerPrefs.GetInt("Cash") >= 2500)
        {
            PlayerPrefs.SetInt("Cash", PlayerPrefs.GetInt("Cash") - 2500);
            shop_cash.text = PlayerPrefs.GetInt("Cash").ToString();
            PlayerPrefs.SetInt("Mode_2", 1);
            Mode2_Screen.SetActive(false);
            PlayerPrefs.SetInt("RewardedMode", 0);
        }
        else
        {
            NotEnoughCoins.SetActive(true);
        }
        src.PlayOneShot(btnClick);
    }
    public void Unlocked_ModeBY_Rewarded()
    {
        PlayerPrefs.SetInt("Reward", 1);
        PlayerPrefs.SetInt("RewardedMode", 1);
        MobileAdsExample.Instance.ShowRewardedVideo();
    }
    public void WatchVideoAd()
    {
        PlayerPrefs.SetInt("Reward", 7);
        PlayerPrefs.SetInt("Rewarded_Cash", 1);
        MobileAdsExample.Instance.ShowRewardedVideo();
    }
    public void Settings()
    {

    }
    public void MoreGames()
    {
        MobileAdsExample.Instance.ShowInterstitial();
        Application.OpenURL("https://play.google.com/store/apps/dev?id=5659235520105216655");
    }
    public void RateUs()
    {
        MobileAdsExample.Instance.ShowInterstitial();
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.darwingames.gangstermafia.crimecity.shooting.games");
    }
    public void PrivacyPolicy()
    {
        MobileAdsExample.Instance.ShowInterstitial();
        Application.OpenURL("https://darwingames1.blogspot.com/2023/06/privacy-policy.html");
    }

    
    public Slider musicVolumeSlider;
    public Slider fpsSlider;


    public void SetQualityLow()
    {
        SetQuality(0); // Low quality index
    }

    public void SetQualityMedium()
    {
        SetQuality(1); // Medium quality index
    }

    public void SetQualityHigh()
    {
        SetQuality(2); // High quality index
    }

    public void SetMusicVolume(float vol)
    {
        
        set_Vol(vol);
        PlayerPrefs.SetFloat("MusicVolume", vol);
        //Debug.LogError(PlayerPrefs.GetFloat("MusicVolume"));
        PlayerPrefs.Save();

    }
    void set_Vol(float vol)
    {
        src.volume = vol;

    }
    public GameObject[] QualityBtns;
    private void SetQuality(int index)
    {
        QualitySettings.SetQualityLevel(index);
        QualityBtns[index].SetActive(true);
        SaveSettings();
    }
  
     private void UpdateFPS(float newFPS)
    {
        SetFPS(newFPS);
        PlayerPrefs.SetFloat("SelectedFPS", newFPS);
        //Debug.LogError(PlayerPrefs.GetFloat("SelectedFPS"));
        PlayerPrefs.Save();
    }

    private void SetFPS(float fps)
    {
        // Set your game's target frame rate
        //QualitySettings.vSyncCount = 0; // Disable VSync
       // Application.targetFrameRate = Mathf.RoundToInt(fps);
    }
    private void LoadSettings()
    {
        
        // Load quality level
        int qualityLevel = PlayerPrefs.GetInt("QualityLevel"); // Default to medium
        SetQuality(qualityLevel);
        fpsSlider.value = PlayerPrefs.GetFloat("SelectedFPS");
        musicVolumeSlider.value = PlayerPrefs.GetFloat("MusicVolume");
        if (PlayerPrefs.GetInt("Controls") == 1)
        {
            steeringSel.SetActive(true);
            btn_sel.SetActive(false);
        }
        else
        {
            steeringSel.SetActive(false);
            btn_sel.SetActive(true);
        }
    }
    public GameObject steeringSel;
    public GameObject btn_sel;

    public void Steering_()
    {
        PlayerPrefs.SetInt("Controls", 1);
    }
    public void Button_Controls()
    {
        PlayerPrefs.SetInt("Controls", 2);
    }
    private void SaveSettings()
    {
        // Save quality level
        int qualityLevel = QualitySettings.GetQualityLevel();
        PlayerPrefs.SetInt("QualityLevel", qualityLevel);

        // Save PlayerPrefs to disk
        PlayerPrefs.Save();
    }
}
