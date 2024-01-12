using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.AddressableAssets;
public class Splash : MonoBehaviour
{
    public Slider loadingSlider;
   
    public string sceneToLoad;

 

    private void Start()
    {
      StartCoroutine(LoadSceneAsync());
    }

  
    private IEnumerator LoadSceneAsync()
    {

       
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneToLoad);
       
        while (!operation.isDone)
        {
            float progress = Mathf.Clamp01(operation.progress / 0.9f); // 0.9 is the completion value
            loadingSlider.value = progress * 100; // Convert progress to a range of 0-100
            yield return null;
        }
    }

}
