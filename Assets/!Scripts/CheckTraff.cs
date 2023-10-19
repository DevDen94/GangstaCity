using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SWS;
public class CheckTraff : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag=="Player" || other.gameObject.tag == "Traffic")
        {
            gameObject.transform.parent.GetComponent<splineMove>().Pause();
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player" || other.gameObject.tag == "Traffic")
        {
            gameObject.transform.parent.GetComponent<splineMove>().Resume();
        }
    }
}
