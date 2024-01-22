using GoogleMobileAds.Api;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class GoogleMobileAdsController : MonoBehaviour
{
    
    private BannerView SmallbannerAd;
    private BannerView BigbannerAd;
    private InterstitialAd interstitialAd;
    private RewardedAd rewardedAd;


    private BannerView MediumECPMSmallbannerAd;
    private BannerView MediumECPMBigbannerAd;
    private InterstitialAd MediumECPMInterstitialAd;
    private RewardedAd MediumECPMrewardedAd;

    private BannerView ALLPRICEECPMSmallbannerAd;
    private BannerView ALLPRICEECPMBigbannerAd;
    private InterstitialAd ALLPRICEECPMInterstitialAd;
    private RewardedAd ALLPRICEECPMrewardedAd;



    [Header("HIGH ECPM")]
    // Replace with your actual ad unit IDs
    public string bannerAdUnitId;
    public string interstitialAdUnitId;
    public string rewardedAdUnitId;
    public string BIGbannerAdUnitId;
    [Header("MEDIUM ECPM")]
    // Replace with your actual ad unit IDs
    public string MediumBannerAdUnitId;
    public string MediumInterstitialAdUnitId;
    public string MediumRewardedAdUnitId;
    public string BIGbannerMediumAdUnitId;
    [Header("ALL PRICE ECPM")]
    // Replace with your actual ad unit IDs
    public string ALLPriceBannerAdUnitId;
    public string ALLPriceInterstitialAdUnitId;
    public string ALLPriceRewardedAdUnitId;
    public string BIGbannerAllAdUnitId;


    [Space]

    public AdPosition SmallBannerPosition;
    public AdPosition BigBannerPosition;

    [Space]

    public bool ShowTestAds;
    [Space]
    [Header("Unity Ads")]

    public string UnityAdsID;
    public string BANNER_PLACEMENT;
    public string InterstatialPlacement;
    public string REWARDED_VIDEO_PLACEMENT;


    public static GoogleMobileAdsController Instance;
    public int number = 0;


    private void Awake()
    {
        if (Instance == null)
        {
            // This is the first instance, so make it the singleton
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            // An instance already exists, so destroy this one
            Destroy(gameObject);
        }


        if (ShowTestAds)
        {
            bannerAdUnitId = "ca-app-pub-3940256099942544/6300978111";
            interstitialAdUnitId = "ca-app-pub-3940256099942544/1033173712";
            rewardedAdUnitId = "ca-app-pub-3940256099942544/5224354917";
            BIGbannerAdUnitId = "ca-app-pub-3940256099942544/6300978111";


            MediumBannerAdUnitId = "ca-app-pub-3940256099942544/6300978111";
            MediumInterstitialAdUnitId = "ca-app-pub-3940256099942544/1033173712";
            MediumRewardedAdUnitId = "ca-app-pub-3940256099942544/5224354917";
            BIGbannerMediumAdUnitId = "ca-app-pub-3940256099942544/6300978111";


            ALLPriceBannerAdUnitId = "ca-app-pub-3940256099942544/6300978111";
            ALLPriceInterstitialAdUnitId = "ca-app-pub-3940256099942544/1033173712";
            ALLPriceRewardedAdUnitId = "ca-app-pub-3940256099942544/5224354917";
            BIGbannerAllAdUnitId = "ca-app-pub-3940256099942544/6300978111";
        }
    #if UNITY_ANDROID

        BANNER_PLACEMENT = "Banner_Android";
        InterstatialPlacement = "Interstitial_Android";
        REWARDED_VIDEO_PLACEMENT = "Rewarded_Android";

    #elif UNITY_IOS
        BANNER_PLACEMENT = "Banner_iOS";
        InterstatialPlacement = "Interstitial_iOS";
        REWARDED_VIDEO_PLACEMENT = "Rewarded_iOS";
    #endif



    }
    private void Start()
    {
        number = 0;
        // Initialize AdMob SDK
        MobileAds.Initialize(initStatus => { });

        // Load HIGH ECPM ADS
        LoadSmallBannerAd();
        LoadBigBannerAd();
        LoadInterstitialAd();
        LoadRewardedAd();

        // Load MEDIUM ECPM ADS
        MEDIUMLoadBigBannerAd();
        MEDIUMLoadSmallBannerAd();
        MEDIUMLoadInterstitialAd();
        MEDIUMLoadRewardedAd();


        ALLPRICESLoadSmallBannerAd();
        ALLPRICESLoadBigBannerAd();
        ALLPRICESLoadInterstitialAd();
        ALLPRICESLoadRewardedAd();
        
        SmallbannerAd.Hide();
        BigbannerAd.Hide();
        MediumECPMSmallbannerAd.Hide();
        ALLPRICEECPMSmallbannerAd.Hide();
        MediumECPMBigbannerAd.Hide();
        ALLPRICEECPMBigbannerAd.Hide();





        
        rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        MediumECPMrewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        ALLPRICEECPMrewardedAd.OnUserEarnedReward += HandleUserEarnedReward;



        
    }
  

    #region HIGH ECPM LOAD ADS PORTION
    private void LoadSmallBannerAd()
    {
        SmallbannerAd = new BannerView(bannerAdUnitId, AdSize.Banner, SmallBannerPosition);
        AdRequest adRequest = new AdRequest.Builder().Build();
        SmallbannerAd.LoadAd(adRequest);
    }
    private void LoadBigBannerAd()
    {
        BigbannerAd = new BannerView(BIGbannerAdUnitId, AdSize.MediumRectangle, BigBannerPosition);
        AdRequest adRequest = new AdRequest.Builder().Build();
        BigbannerAd.LoadAd(adRequest);
    }
    private void LoadInterstitialAd()
    {
        interstitialAd = new InterstitialAd(interstitialAdUnitId);
        AdRequest adRequest = new AdRequest.Builder().Build();
        interstitialAd.LoadAd(adRequest);
    }

    private void LoadRewardedAd()
    {
        rewardedAd = new RewardedAd(rewardedAdUnitId);
        AdRequest adRequest = new AdRequest.Builder().Build();
        rewardedAd.LoadAd(adRequest);
    }
    #endregion

    #region MEDIUM ECPM LOAD ADS PORTION
    private void MEDIUMLoadSmallBannerAd()
    {
        MediumECPMSmallbannerAd = new BannerView(MediumBannerAdUnitId, AdSize.Banner, SmallBannerPosition);
        AdRequest adRequest = new AdRequest.Builder().Build();
        MediumECPMSmallbannerAd.LoadAd(adRequest);
    }
    private void MEDIUMLoadBigBannerAd()
    {
        MediumECPMBigbannerAd = new BannerView(BIGbannerMediumAdUnitId, AdSize.MediumRectangle, BigBannerPosition);
        AdRequest adRequest = new AdRequest.Builder().Build();
        MediumECPMBigbannerAd.LoadAd(adRequest);
    }
    private void MEDIUMLoadInterstitialAd()
    {
        MediumECPMInterstitialAd = new InterstitialAd(MediumInterstitialAdUnitId);
        AdRequest adRequest = new AdRequest.Builder().Build();
        MediumECPMInterstitialAd.LoadAd(adRequest);
    }

    private void MEDIUMLoadRewardedAd()
    {
        MediumECPMrewardedAd = new RewardedAd(MediumRewardedAdUnitId);
        AdRequest adRequest = new AdRequest.Builder().Build();
        MediumECPMrewardedAd.LoadAd(adRequest);
    }
    #endregion

    #region ALL PRICES ECPM LOAD ADS PORTION
    private void ALLPRICESLoadSmallBannerAd()
    {
        ALLPRICEECPMSmallbannerAd = new BannerView(ALLPriceBannerAdUnitId, AdSize.Banner, SmallBannerPosition);
        AdRequest adRequest = new AdRequest.Builder().Build();
        ALLPRICEECPMSmallbannerAd.LoadAd(adRequest);
    }
    private void ALLPRICESLoadBigBannerAd()
    {
        ALLPRICEECPMBigbannerAd = new BannerView(BIGbannerAllAdUnitId, AdSize.MediumRectangle, BigBannerPosition);
        AdRequest adRequest = new AdRequest.Builder().Build();
        ALLPRICEECPMBigbannerAd.LoadAd(adRequest);
    }
    private void ALLPRICESLoadInterstitialAd()
    {
        ALLPRICEECPMInterstitialAd = new InterstitialAd(ALLPriceInterstitialAdUnitId);
        AdRequest adRequest = new AdRequest.Builder().Build();
        ALLPRICEECPMInterstitialAd.LoadAd(adRequest);
    }

    private void ALLPRICESLoadRewardedAd()
    {
        ALLPRICEECPMrewardedAd = new RewardedAd(ALLPriceRewardedAdUnitId);
        AdRequest adRequest = new AdRequest.Builder().Build();
        ALLPRICEECPMrewardedAd.LoadAd(adRequest);
    }
    #endregion

    #region SHOW ADS PORTIOn
    public void ShowInterstitialAd()
    {
       
        if (interstitialAd != null && interstitialAd.IsLoaded())
        {
            interstitialAd.Show();
            LoadInterstitialAd();
            MEDIUMLoadInterstitialAd();
            ALLPRICESLoadInterstitialAd();
        }
        else if (MediumECPMInterstitialAd != null && MediumECPMInterstitialAd.IsLoaded())
        {
            MediumECPMInterstitialAd.Show();
            LoadInterstitialAd();
            MEDIUMLoadInterstitialAd();
            ALLPRICESLoadInterstitialAd();
        }
        else if (ALLPRICEECPMInterstitialAd != null && ALLPRICEECPMInterstitialAd.IsLoaded())
        {
            ALLPRICEECPMInterstitialAd.Show();
            LoadInterstitialAd();
            MEDIUMLoadInterstitialAd();
            ALLPRICESLoadInterstitialAd();
        }

        else
        {
            
            LoadInterstitialAd();
            MEDIUMLoadInterstitialAd();
            ALLPRICESLoadInterstitialAd();
        }
        
    }

    public void ShowRewardedAd()
    {
        if (rewardedAd != null && rewardedAd.IsLoaded())
        {
            rewardedAd.Show();

            LoadRewardedAd();
            MEDIUMLoadRewardedAd();
            ALLPRICESLoadRewardedAd();
        }else if (MediumECPMrewardedAd != null && MediumECPMrewardedAd.IsLoaded())
        {
            MediumECPMrewardedAd.Show();

            LoadRewardedAd();
            MEDIUMLoadRewardedAd();
            ALLPRICESLoadRewardedAd();
        }
        else if (ALLPRICEECPMrewardedAd != null && ALLPRICEECPMrewardedAd.IsLoaded())
        {
            ALLPRICEECPMrewardedAd.Show();

            LoadRewardedAd();
            MEDIUMLoadRewardedAd();
            ALLPRICESLoadRewardedAd();
        }
        else
        {
            
            LoadRewardedAd();
            MEDIUMLoadRewardedAd();
            ALLPRICESLoadRewardedAd();
        }
    }

    public void ShowSmallBannerAd()
    {
        if (SmallbannerAd != null)
        {
            SmallbannerAd.Show();
        }
        else if (MediumECPMSmallbannerAd != null)
        {
            MediumECPMSmallbannerAd.Show();
        }
        else if (ALLPRICEECPMSmallbannerAd != null)
        {
            ALLPRICEECPMSmallbannerAd.Show();
        }
        else
        {
            LoadSmallBannerAd();
            MEDIUMLoadSmallBannerAd();
            ALLPRICESLoadSmallBannerAd();
        }

        if (BigbannerAd != null)
        {
            BigbannerAd.Hide();
        }
        else if (MediumECPMBigbannerAd != null)
        {
            MediumECPMBigbannerAd.Hide();
        }else if (ALLPRICEECPMBigbannerAd != null)
        {
            ALLPRICEECPMBigbannerAd.Hide();
        }

    }


    public void ShowBiGBannerAd()
    {
        if (BigbannerAd != null)
        {
            BigbannerAd.Show();

        }else if (MediumECPMBigbannerAd != null)
        {
            MediumECPMBigbannerAd.Show();

        }else if (ALLPRICEECPMBigbannerAd != null)
        {
            ALLPRICEECPMBigbannerAd.Show();

        }
        else
        {
            LoadBigBannerAd();
            MEDIUMLoadBigBannerAd();
            ALLPRICESLoadBigBannerAd();
        }




        if (SmallbannerAd != null)
        {
            SmallbannerAd.Hide();
        }else if (MediumECPMSmallbannerAd != null)
        {
            MediumECPMSmallbannerAd.Hide();
        }else if (ALLPRICEECPMSmallbannerAd != null)
        {
            ALLPRICEECPMSmallbannerAd.Hide();
        }
    }

    #endregion

    #region RewardedAD CallBack
    public bool rewarded;
    private void HandleUserEarnedReward(object sender, Reward args)
    {
        string type = args.Type;
        double amount = args.Amount;
        Debug.Log("User Win Reward");
        Debug.Log("User earned reward of " + amount + " " + type);
        // You can implement your reward logic here
        if (rewarded)
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

        rewarded = false;

    }


    #endregion




}
