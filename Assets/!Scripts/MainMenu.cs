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
      
        instance = this;
        Time.timeScale = 1f;
        if (!PlayerPrefs.HasKey("qabe"))
        {
            PlayerPrefs.SetFloat("Music", 1);
            PlayerPrefs.SetInt("Unlocked_Mission", 1);
            PlayerPrefs.SetInt("Cash", 1000);
            PlayerPrefs.SetInt("qabe", 12); 
        }
        unlockedLevels = PlayerPrefs.GetInt("Unlocked_Mission");
        Mission_Unlocked();
        float savedVolume = PlayerPrefs.GetFloat("Music");
        volumeSlider.value = savedVolume;
        src.volume = PlayerPrefs.GetFloat("Music");
        soundSlider.value = PlayerPrefs.GetFloat("Sounds");
        soundSrc.volume = PlayerPrefs.GetFloat("Sounds");
        shop_cash.text = PlayerPrefs.GetInt("Cash").ToString();
       // abc.text = " Unlocked" + unlockedLevels.ToString() + "\t " + PlayerPrefs.GetInt("Cash");
        GoogleAdMobController.instance.ShowSmallBannerAd();
    }
    public void Start_Btn()
    {
        GoogleAdMobController.instance.ShowInterstitialAd();
        ModeSelectionPanel.SetActive(true);
    }
    public void BtnClick()
    {
        soundSrc.PlayOneShot(btnClick);
    }
    public void OnExit()
    {
        Application.Quit();
    }
    public Slider volumeSlider;
    public Slider soundSlider;
    public void SetVolume()
    {
        float volume = volumeSlider.value;
        PlayerPrefs.SetFloat("Music", volume);
        src.volume = PlayerPrefs.GetFloat("Music");
    }
    public void SetSoundV()
    {
        float volume1 = soundSlider.value;
        PlayerPrefs.SetFloat("Sounds", volume1);
    }
    public void LoadLevel(int i = 1)
    {
        PlayerPrefs.SetInt("MissionNo", i);
        LoadingScene_Name.sceneToLoad = "MissionMode";
        LoadingPanel.SetActive(true);
        src.PlayOneShot(btnClick);

    }
    public GameObject levelSelectionPanel;
    public GameObject ModeSelectionPanel;
    public GameObject NotEnoughCoins;
    public GameObject Mode2_Screen;
    public Button[] levels;
    public GameObject[] lockedBtn;

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
        }
        else
        {
            if (PlayerPrefs.GetInt("Mode_2") == 1)
            {
              
                LoadingScene_Name.sceneToLoad = "CareerMode";
                LoadingPanel.SetActive(true);
                PlayerPrefs.SetInt("Mode_Select", 2);
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
        GoogleAdMobController.instance.ShowRewardedAd();
        

    }
    public void Settings()
    {

    }
    public void MoreGames()
    {

    }
    public void RateUs()
    {

    }
    public void PrivacyPolicy()
    {

    }
}
