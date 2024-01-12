using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class Trigger_Tut : MonoBehaviour
{
    public TutorialScene ts;
    public GameObject gm;
    public GameObject TutorialFinsih_panel;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            gm.SetActive(false);
            ts.LoadTutorial();
        }
        if (other.gameObject.tag == "Car")
        {
            PlayerPrefs.SetInt("Tut_Called", 1);
            TutorialFinsih_panel.SetActive(true);
            TutorialScene.instance.Hummar.SetActive(false);
            Invoke("SceneChange", 5f);
        }
    }
   void SceneChange()
    {
        PlayerPrefs.SetInt("MissionNo", 1);
        PlayerPrefs.SetInt("Mode_Select", 1);
        SceneManager.LoadScene("MissionMode");
    }
}
