using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Implementation : MonoBehaviour
{

    public static Implementation instance;
    void Awake()
    {
        instance = this;
        Advertisements.Instance.Initialize();
        DontDestroyOnLoad(gameObject);
    }

    public void ShowBanner()
    {
        Advertisements.Instance.ShowBanner(BannerPosition.TOP,BannerType.Banner);
    }

    public void HideBanner()
    {
        Advertisements.Instance.HideBanner();
    }
    public void ShowInterstitial()
    {
        Advertisements.Instance.ShowInterstitial();
    }
    public void ShowRewardedVideo()
    {
        Advertisements.Instance.ShowRewardedVideo(CompleteMethod);
    }

    private void CompleteMethod(bool completed)
    {
        int a = PlayerPrefs.GetInt("Reward");
        Debug.Log("OnRewardAdClosed");
        switch (a)
        {
            case 1:
                if (PlayerPrefs.GetInt("RewardedMode") == 1)
                {
                    PlayerPrefs.SetInt("Mode_2", 1);
                    MainMenu.instance.Mode2_Screen.SetActive(false);
                    PlayerPrefs.SetInt("RewardedMode", 2);
                    PlayerPrefs.SetInt("Reward", 0);
                }
                break;
            case 2:
                if (PlayerPrefs.GetInt("ShopReward_Constume") == 1)
                {
                    PlayerPrefs.SetInt(GameManger.instance.Shop_InstanceKey, 1);
                    PlayerPrefs.SetInt("ShopReward_Constume", 2);
                    GameManger.instance.sh.Check_Textures();
                    PlayerPrefs.SetInt("Reward", 0);
                }
                break;
            case 3:
                if (PlayerPrefs.GetInt("Car_Reward") == 1)
                {
                    Car_Manager.instance.CarBuySucessfull();
                    PlayerPrefs.SetInt("Car_Reward", 2);
                    PlayerPrefs.SetInt("Reward", 0);
                }
                break;
            case 4:
                if (PlayerPrefs.GetInt("Bike_Reward") == 1)
                {
                    Bike_ControlS.instance.BikeBuySucessfull();
                    PlayerPrefs.SetInt("Bike_Reward", 2);
                    PlayerPrefs.SetInt("Reward", 0);
                }
                break;
            case 5:
                if (PlayerPrefs.GetInt("Tank_Reward") == 1)
                {
                    TankSpawner.instance.TankBuySucessfull();
                    PlayerPrefs.SetInt("Tank_Reward", 2);
                    PlayerPrefs.SetInt("Reward", 0);
                }
                break;
            case 6:
                if (PlayerPrefs.GetInt("Jet_Reward") == 1)
                {
                    JetSpawner.instance.JetBuySucessfull();
                    PlayerPrefs.SetInt("Jet_Reward", 2);
                    PlayerPrefs.SetInt("Reward", 0);
                }
                break;
            case 7:
                if (PlayerPrefs.GetInt("Rewarded_Cash") == 1)
                {
                    PlayerPrefs.SetInt("Cash", PlayerPrefs.GetInt("Cash") + 2000);
                    MainMenu.instance.shop_cash.text = PlayerPrefs.GetInt("Cash").ToString();
                    PlayerPrefs.SetInt("Reward", 0);
                    PlayerPrefs.SetInt("Rewarded_Cash", 2);
                }
                break;
            case 8:
                if (PlayerPrefs.GetInt("NOS") == 1)
                {    
                    PlayerPrefs.SetInt("Reward", 0);
                    PlayerPrefs.SetInt("NOS", 2);
                    Car_Manager.instance.Nos_Ad.SetActive(false);
                    Car_Manager.instance.Nos_ad_2.SetActive(false);
                }
                break;
            default:
                print("NoOne");
                break;
        }
    }


}
