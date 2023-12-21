using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trigger_Tut : MonoBehaviour
{
    public TutorialScene ts;
    public GameObject gm;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            gm.SetActive(false);
            ts.LoadTutorial();
        }
        if (other.gameObject.tag == "Car")
        {
            Debug.LogError("TutorialFinish");
        }
    }
}
