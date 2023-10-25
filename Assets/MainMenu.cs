using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenu : MonoBehaviour
{
    public GameObject LoadingPanel;

    public void Start_Btn()
    {
        LoadingPanel.SetActive(true);    
    }
    public void BtnClick()
    {

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
