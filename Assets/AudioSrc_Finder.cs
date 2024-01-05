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

        if (PlayerPrefs.GetInt("Music") == 1)
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
}
