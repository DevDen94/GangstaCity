using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;

public class SceneLoader : MonoBehaviour
{
    [SerializeField] private string addressableKey = "your_google_cloud_addressable_key";

    void Start()
    {
        StartCoroutine(LoadScene());
    }

    IEnumerator LoadScene()
    {
        AsyncOperationHandle<SceneInstance> sceneHandle = Addressables.LoadSceneAsync(addressableKey, LoadSceneMode.Additive, activateOnLoad: false);

        yield return sceneHandle;

        if (sceneHandle.Status == AsyncOperationStatus.Succeeded)
        {
            // Do any additional setup if needed
            // ...

            // Activate the loaded scene
            SceneManager.SetActiveScene(sceneHandle.Result.Scene);

            Debug.Log("Scene loaded successfully");
        }
        else
        {
            Debug.LogError("Failed to load scene: " + sceneHandle.OperationException);
        }
    }
}
