using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animator_Cs : MonoBehaviour
{
   public void off_Scrll()
    {
        gameObject.GetComponent<Animator>().enabled = false;
    }
    public void OnEnable()
    {
        gameObject.GetComponent<Animator>().enabled = true;
    }
}
