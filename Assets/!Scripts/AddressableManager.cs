using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
public class AddressableManager : MonoBehaviour
{
   // public Text _Text;
   // public Text _ProgressCountText;
   // public GameObject AddressaDownloadablePanel;
    //public Image DownloadProgressImage;
    [SerializeField] private List<AssetReference> _scenes = new List<AssetReference>();

    // Start is called before the first frame update
    void Start()
    {
        DontDestroyOnLoad(gameObject);
     //   AddressaDownloadablePanel.SetActive(true);
        StartDownloading();

    }

    public void StartDownloading()
    {
        StartCoroutine(Started());
    }
    public IEnumerator Started()
    {
        string key = "scenes";


        var downloadScene = Addressables.DownloadDependenciesAsync(key, true);

        Debug.Log("Scene Downloading");


        while (!downloadScene.IsDone)
        {

            var status = downloadScene.GetDownloadStatus();
           // _Text.text = "Checking For Updates...";
            if (status.Percent > 0)
            {
                Debug.LogError("Downloadinggg");
              //  _Text.text = "Downloading...";
              //  _ProgressCountText.text = ((int)(status.Percent * 100)) + "%";
               // DownloadProgressImage.fillAmount = status.Percent;
            }

            yield return null;
        }
        Debug.Log("Scene Downloaded");
       // _Text.color = Color.green;
        //_Text.text = "Downloaded";

        if (downloadScene.IsDone)
        {
           // _ProgressCountText.text = "";
           // _Text.text = "";
           // AddressaDownloadablePanel.SetActive(false);
           // LoadMenuScene();
        }


    }
  

}
