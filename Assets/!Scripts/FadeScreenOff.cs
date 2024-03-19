using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeScreenOff : MonoBehaviour
{
    public bool _Long;
    public void FadeScreen()
    {
        gameObject.SetActive(false);

        if(!_Long && !GameManger.instance.CutSceneScreen)
        GameManger.instance.CutSceneScreen.SetActive(true);
    }
}
