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
    private void Start()
    {
        Time.timeScale = 1f;
        if (!PlayerPrefs.HasKey("S"))
        {
            PlayerPrefs.SetInt("Cash", 800);
            PlayerPrefs.SetInt("S", 12); PlayerPrefs.SetFloat("Music", 1);
        }
        float savedVolume = PlayerPrefs.GetFloat("Music");
        volumeSlider.value = savedVolume;
        src.volume = PlayerPrefs.GetFloat("Music");
        shop_cash.text = PlayerPrefs.GetInt("Cash").ToString();
    }
    public void Start_Btn()
    {
        LoadingPanel.SetActive(true);    
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
