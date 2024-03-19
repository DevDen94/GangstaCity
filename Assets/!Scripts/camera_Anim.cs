using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class camera_Anim : MonoBehaviour
{
    public CutScene_Start cs;
   public void SwitchToGirlTalk()
    {
        cs.Girl.SetInteger("value", 1);
        cs.src.PlayOneShot(cs.FemaleTalkCLIP);
    }

    public void SwitchToMALETalk()
    {
        cs.Male.SetInteger("value", 1);
        cs.src.PlayOneShot(cs.MaleTalkClip);
    }
    public void Active_HeliCopter()
    {
       cs.src.PlayOneShot(cs.HelicopterClip);
        cs.Helicopter.SetActive(true);
    }
    public void HelicpterOff()
    {
        cs.Helicopter.SetActive(false);
        gameObject.transform.parent.gameObject.SetActive(false);
        cs.cs.part2_A();
    }
}
