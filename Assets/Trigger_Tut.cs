using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
            //Invoke("SceneChange", 4f);
        }
    }
   void SceneChange()
    {
        TutorialScene.instance.cs.SceneChange();
    }
}
