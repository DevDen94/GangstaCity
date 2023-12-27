using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Src_SFXOff : MonoBehaviour
{
  public  AudioSource src;
    private void Awake()
    {
        if (PlayerPrefs.GetInt("SFX") == 1)
        {
            src.enabled = true;
        }
        else
        {
            src.enabled = false;
        }
    }
}
