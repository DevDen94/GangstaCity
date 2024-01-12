using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class Addressable_Mine : MonoBehaviour
{
    // Start is called before the first frame update

    public AssetReference playerArmatureAssetReference;
    private void Start()
    {
        Addressables.InitializeAsync().Completed += AddressablesManager_Completed;

    }


    private void AddressablesManager_Completed(AsyncOperationHandle<IResourceLocator> obj)
    {

        playerArmatureAssetReference.LoadAssetAsync<GameObject>().Completed += (playerArmatureAsset) =>

        playerArmatureAssetReference.InstantiateAsync().Completed += (playerArmatureGameObject) =>
        {

            var playerController = playerArmatureGameObject.Result;

        };

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
}