using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Implementation : MonoBehaviour
{

    public static Implementation instance;
    /// <summary>
    /// Initialize the ads
    /// </summary>
    void Awake()
    {
        instance = this;
        Advertisements.Instance.Initialize();
        DontDestroyOnLoad(gameObject);
    }



    /// <summary>
    /// Show banner, assigned from inspector
    /// </summary>
    public void ShowBanner()
    {
        Advertisements.Instance.ShowBanner(BannerPosition.TOP,BannerType.Banner);
    }

    public void HideBanner()
    {
        Advertisements.Instance.HideBanner();
    }


    /// <summary>
    /// Show Interstitial, assigned from inspector
    /// </summary>
    public void ShowInterstitial()
    {
        Advertisements.Instance.ShowInterstitial();
    }

    /// <summary>
    /// Show rewarded video, assigned from inspector
    /// </summary>
    public void ShowRewardedVideo()
    {
        Advertisements.Instance.ShowRewardedVideo(CompleteMethod);
    }


    /// <summary>
    /// This is for testing purpose
    /// </summary>
    void Update()
    {
      
    }

    private void CompleteMethod(bool completed)
    {
       
            Debug.Log("OnRewardAdClosed");
            if (PlayerPrefs.GetInt("RewardedMode") == 1)
            {
                PlayerPrefs.SetInt("Mode_2", 1);
                MainMenu.instance.Mode2_Screen.SetActive(false);
                PlayerPrefs.SetInt("RewardedMode", 2);
                Debug.LogError("Rewarded_Mode");
            }
            else if (PlayerPrefs.GetInt("ShopReward_Constume") == 1)
            {
                PlayerPrefs.SetInt(GameManger.instance.Shop_InstanceKey, 1);
                PlayerPrefs.SetInt("ShopReward_Constume", 2);
                GameManger.instance.sh.Check_Textures();
                Debug.LogError("Rewarded_Shop");
            }
            else if (PlayerPrefs.GetInt("Car_Reward") == 1)
            {
                Car_Manager.instance.CarBuySucessfull();
                PlayerPrefs.SetInt("Car_Reward", 2);
                Debug.LogError("BuyCar");
            }
            else if (PlayerPrefs.GetInt("Bike_Reward") == 1)
            {
                Bike_ControlS.instance.BikeBuySucessfull();
                PlayerPrefs.SetInt("Bike_Reward", 2);
                Debug.LogError("Buybike");
            }
            else if (PlayerPrefs.GetInt("Tank_Reward") == 1)
            {
                TankSpawner.instance.TankBuySucessfull();
                PlayerPrefs.SetInt("Tank_Reward", 2);
                Debug.LogError("Buytank");
            }
            else if (PlayerPrefs.GetInt("Jet_Reward") == 1)
            {
                JetSpawner.instance.JetBuySucessfull();
                PlayerPrefs.SetInt("Jet_Reward", 2);
                Debug.LogError("BuyJet");
            }
        }
    
}
