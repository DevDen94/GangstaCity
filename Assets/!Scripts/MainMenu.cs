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
            PlayerPrefs.SetInt("Cash", 50000);
            PlayerPrefs.SetInt("S", 12);
        }
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
