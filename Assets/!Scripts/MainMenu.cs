using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class MainMenu : MonoBehaviour
{
    public GameObject LoadingPanel;
    public AudioClip btnClick;
    public AudioSource src;
    public Text shop_cash;
    public Splash LoadingScene_Name;
    int unlockedLevels;
    private void Start()
    {
        Time.timeScale = 1f;
        if (!PlayerPrefs.HasKey("S"))
        {
            PlayerPrefs.SetInt("MissionNo", 1);
            PlayerPrefs.SetInt("Cash", 50000);
            PlayerPrefs.SetInt("S", 12); PlayerPrefs.SetFloat("Music", 1);
        }
        unlockedLevels = PlayerPrefs.GetInt("MissionNo");
        Disable_All();
        float savedVolume = PlayerPrefs.GetFloat("Music");
        volumeSlider.value = savedVolume;
        src.volume = PlayerPrefs.GetFloat("Music");
        shop_cash.text = PlayerPrefs.GetInt("Cash").ToString();
    }
    public void Start_Btn()
    {
        ModeSelectionPanel.SetActive(true);
    }
    public void BtnClick()
    {
        src.PlayOneShot(btnClick);
    }
    public void OnExit()
    {
        Application.Quit();
    }
    public Slider volumeSlider;
    public void SetVolume()
    {
        float volume = volumeSlider.value;
        PlayerPrefs.SetFloat("Music", volume);
        src.volume = PlayerPrefs.GetFloat("Music");
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

    void Disable_All()
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
        }
        else
        {
            NotEnoughCoins.SetActive(true);
        }
        src.PlayOneShot(btnClick);
    }
    public void Unlocked_ModeBY_Rewarded()
    {
        PlayerPrefs.SetInt("Mode_2", 1);
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
