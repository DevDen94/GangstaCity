using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioSrc_Finder : MonoBehaviour
{
    public GameObject SRC_Audios;
    // Start is called before the first frame update
    void Start()
    {
        Find();
    }

    void Find()
    {
        Transform audioSourceTransform = transform.Find("All Audio Sources");
        if (audioSourceTransform != null)

        {
            SRC_Audios = audioSourceTransform.gameObject;
        }
        else
        {
            //   Debug.LogError("Child object 'All Audio Sources' not found under the parent.");
        }

        if (PlayerPrefs.GetInt("SFX") == 1)
        {
            SRC_Audios.gameObject.SetActive(true);
          //  gameObject.GetComponent<AudioSource>().enabled = true;
        }
        else
        {
            SRC_Audios.gameObject.SetActive(false);
           // gameObject.GetComponent<AudioSource>().enabled = false;
        }
    }
    private void OnTriggerEnter(Collider other)
    {
       
        if (other.gameObject.layer == LayerMask.NameToLayer("Building") || other.gameObject.tag == "Concrete")
        {
            TankSpawner.instance.TankOut.gameObject.SetActive(false);
        }
    }


    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Building") || other.gameObject.tag == "Concrete")
        {
            TankSpawner.instance.TankOut.gameObject.SetActive(true);
        }
    }

}
