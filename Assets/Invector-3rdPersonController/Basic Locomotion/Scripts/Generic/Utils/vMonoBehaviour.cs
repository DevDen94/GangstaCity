using UnityEngine;

namespace Invector
{
    public  class vMonoBehaviour : MonoBehaviour
    {
        [SerializeField, HideInInspector]
        private bool openCloseEvents ;
        [SerializeField, HideInInspector]
        private bool openCloseWindow;
        [SerializeField, HideInInspector]       
        private int selectedToolbar;
     
        private void Awake()
        {
           if(GetComponent<AudioSource>() != null)
            {
                if (PlayerPrefs.GetInt("SFX") == 1)
                {
                    GetComponent<AudioSource>().enabled = true;
                }
                else
                {
                    GetComponent<AudioSource>().enabled = false;
                }
            }
           
        }
    }  
}
