using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class MainMenu : MonoBehaviour
{
    public GameObject LoadingPanel;
    public AudioClip btnClick;
    public AudioSource src;
    public AudioSource soundSrc;
    public Text shop_cash;
    public Splash LoadingScene_Name;
    int unlockedLevels;
    public static MainMenu instance;
    //public Text abc;
    private void Start()
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        instance = this;
        Time.timeScale = 1f;
        if (!PlayerPrefs.HasKey("qabe"))
        {
            PlayerPrefs.SetInt("SFX", 1);
            PlayerPrefs.SetInt("Music", 1);
            PlayerPrefs.SetInt("Unlocked_Mission", 1);
            PlayerPrefs.SetInt("Cash", 1000);
            PlayerPrefs.SetInt("qabe", 12);
            PlayerPrefs.SetInt("Tut_Called", 0);
            selectBtn_Mission.interactable = false;
        }
        else
        {
            selectBtn_Mission.interactable = true;
        }


        unlockedLevels = PlayerPrefs.GetInt("Unlocked_Mission");
        Mission_Unlocked();
      
        shop_cash.text = PlayerPrefs.GetInt("Cash").ToString();
        Set_SoundMusic();
        GoogleMobileAdsController.Instance.ShowSmallBannerAd();
    }

    public GameObject SoundOn;
    public GameObject SoundOFF;
    public GameObject MusicOn;
    public GameObject MusicOff;
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


        if (PlayerPrefs.GetInt("Music") == 1)
        {
            src.enabled = true;
            SetMusicOn();
        }
        else
        {
            src.enabled = false;
            SetMusicOff();
        }

    }
    public void Start_Btn()
    {
        //GoogleAdMobController.instance.ShowInterstitialAd();
        ModeSelectionPanel.SetActive(true);
        GoogleMobileAdsController.Instance.ShowInterstitialAd();
        Firebase.Analytics.FirebaseAnalytics.LogEvent("mainmenu_startbtn");
    }
    private void FixedUpdate()
    {
        if (!Cursor.visible)
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
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
        PlayerPrefs.SetInt("MissionNo", i);
        LoadingScene_Name.sceneToLoad = "MissionMode";
        LoadingPanel.SetActive(true);
        src.PlayOneShot(btnClick);
        Firebase.Analytics.FirebaseAnalytics.LogEvent("mission","number",i);

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
  
    public void StartTutCalled()
    {
        if (PlayerPrefs.GetInt("Tut_Called") == 0)
        {
            LoadingScene_Name.sceneToLoad = "Tutorial";
            LoadingPanel.SetActive(true);
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
            Firebase.Analytics.FirebaseAnalytics.LogEvent("mode_1");
        }
        else
        {
            if (PlayerPrefs.GetInt("Mode_2") == 1)
            {
              
                LoadingScene_Name.sceneToLoad = "MissionMode";
                LoadingPanel.SetActive(true);
                PlayerPrefs.SetInt("Mode_Select", 2);
                Firebase.Analytics.FirebaseAnalytics.LogEvent("mode_2");
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
        PlayerPrefs.SetInt("RewardedMode", 1);
        GoogleMobileAdsController.Instance.rewarded = true;
        GoogleMobileAdsController.Instance.ShowRewardedAd();


    }
    public void Settings()
    {

    }
    public void MoreGames()
    {
        Application.OpenURL("https://play.google.com/store/apps/dev?id=5659235520105216655");
    }
    public void RateUs()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.darwingames.gangstermafia.crimecity.shooting.games");
    }
    public void PrivacyPolicy()
    {
        Application.OpenURL("https://darwingames1.blogspot.com/2023/06/privacy-policy.html");
    }
}
