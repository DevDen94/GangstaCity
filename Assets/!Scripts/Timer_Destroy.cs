using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer_Destroy : MonoBehaviour
{
    public int timer;
    public AudioSource[] Musiclistener;
    void Start()
    {
        Invoke("Delay", timer);
        if (PlayerPrefs.GetInt("SFX") == 1)
        {
            foreach (AudioSource a in Musiclistener)
            {
                a.enabled = true;

            }
        }
        else
        {
            foreach (AudioSource a in Musiclistener)
            {
                a.enabled = false;

            }
        }
    }

 void Delay()
    {
        Destroy(gameObject);
    }
}
