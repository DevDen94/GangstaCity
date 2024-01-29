using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
//using UnityEditor;
public class AddresableScenes : MonoBehaviour
{
    public static AddresableScenes instance;
    public Text _Text;
    public Text _ProgressCountText;
    public GameObject AddressaDownloadablePanel;
    public Image DownloadProgressImage;
    [SerializeField] private List<AssetReference> _scenes = new List<AssetReference>();
    private bool is_1st;
  public  void Start()
    {
        if (!PlayerPrefs.HasKey("Data_Download"))
        {
            PlayerPrefs.SetInt("Data_Download", 1);
        }

        is_1st = false;
        start = true;
        instance = this;
        StartTimer();
        AddressaDownloadablePanel.SetActive(true);
        StartDownloading();
      // DontDestroyOnLoad(gameObject);
    }

    public void StartDownloading()
    {
        StartCoroutine(Started());
    }
    public IEnumerator Started()
    {
        string key = "scenes";

        
        var downloadScene = Addressables.DownloadDependenciesAsync(key, true);

        if (!is_1st)
        {
            is_1st = true;
            if (PlayerPrefs.GetInt("Data_Download") == 1)
            {
                Debug.Log("Scene Downloading");
                Firebase.Analytics.FirebaseAnalytics.LogEvent("downloadingstart_addressable");
            }
        }
       

        while (!downloadScene.IsDone)
        {
            
            var status = downloadScene.GetDownloadStatus();
            _Text.text = "Checking For Updates...";
            if (status.Percent > 0)
            {
                _Text.text = "Downloading...";
                _ProgressCountText.text = ((int)(status.Percent * 100)) + "%";
                DownloadProgressImage.fillAmount = status.Percent;
            }
            
            yield return null;
        }
       
        _Text.color = Color.green;
        _Text.text = "Downloaded";
       
       // Debug.LogError(startTime);
        if (downloadScene.IsDone)
        {
            if (PlayerPrefs.GetInt("Data_Download") == 1)
            {
                Debug.Log("Scene Downloaded");
                Firebase.Analytics.FirebaseAnalytics.LogEvent("downloading_complete");
            }
            _ProgressCountText.text = "";
            _Text.text = "";
            AddressaDownloadablePanel.SetActive(false);
            LoadMenuScene();
           
        }

    }
    public void LoadMenuScene()
    {
        PlayerPrefs.SetInt("Data_Download", 2);
        Addressables.LoadSceneAsync(_scenes[0], LoadSceneMode.Single);
        start = false;
       
    }

    private bool clearPreviousScene = false;
    private SceneInstance previousLoadedScene;
    public void LoadAddressableLevel(string addressableKey)
    {
        if (clearPreviousScene)
        {
            Addressables.UnloadSceneAsync(previousLoadedScene).Completed += (asyncHandle) =>
            {
                clearPreviousScene = false;
                previousLoadedScene = new SceneInstance();
            };
        }
        Addressables.LoadSceneAsync(addressableKey, LoadSceneMode.Additive).Completed += (asyncHandle) =>
        {
            clearPreviousScene = true;
            previousLoadedScene = asyncHandle.Result;


        };
    }

    private float startTime;
    public bool start;
 
    void Update()
    {
        // Call this function to check the elapsed time whenever needed
        CheckElapsedTime();
    }

    void StartTimer()
    {
        // Set the start time to the current time
        startTime = Time.time;
        Debug.Log("Timer started!");
    }
    void CheckElapsedTime()
    {
        if (start == true)
        {


            // Calculate the elapsed time by subtracting the start time from the current time
            float elapsedTime = Time.time - startTime;

            // Convert elapsed time to minutes and seconds
            float minutes = Mathf.FloorToInt(elapsedTime / 60);
            float seconds = Mathf.FloorToInt(elapsedTime % 60);

            // Display the elapsed time
            Debug.Log("Elapsed Time: " + minutes.ToString("00") + ":" + seconds.ToString("00"));
        }
    }
}



