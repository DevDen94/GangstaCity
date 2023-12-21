using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vItemManager;
using Invector.vShooter;
using Invector.vCamera;
using Invector;
public class TutorialScene : MonoBehaviour
{
    public GameObject[] TutorialBtns;
    public GameObject ShopCamera;
    public GameObject[] ManagerPanels;
    public GameObject[] TutorialPanels;
    public GameObject FadeSScreen;
    public GameObject Gangster;
    int counter = 0;
    public GameObject TPS_Control;
    private void Start()
    {
        //TPS_Control = GameManger.instance.ThirdPersonPLayer;
       // counter = 0;
        //Loadsec();
    }
    public GameObject[] EnablePanels;

    public void ShopCamera_Off() // load character in shop
    {
        ShopCamera.GetComponent<Animator>().SetBool("shopCamera", true);
        counter = 0;
        Invoke("LoadTutorial", 2f);
        FadeSScreen.SetActive(false);

    }

    void LoadTutorial()  // loadTutorials_ 1/1
    {
        TutorialPanels[counter].SetActive(true);
        switch (counter)
        {
            case 0:
            case 1:
            default:
                Debug.Log("Master");
                break;
        }
        
    }

    public void SelectCharacter()
    {
        foreach(GameObject a in ManagerPanels)
        {
            a.SetActive(true);
        }
        TutorialPanels[counter].SetActive(false);
        FadeSScreen.SetActive(true);
    }
    bool isTps;
    public void OffPanel(int i)
    {
        EnablePanels[i].SetActive(true);
        counter = i + 1;
        Invoke("Loadsec", 3f);
    }
    private void Update()
    {
       // if (TPS_Control.GetComponent<vHealthController>()._currentHealth <= 5)
       // {
        //    TPS_Control.GetComponent<vHealthController>()._currentHealth = 250;
      //  }
        
    }
    void Loadsec()
    {
        if (counter == 4)
        {
            Gangster.SetActive(true);
        }
        if (counter == 5)
            return;
        TutorialBtns[counter].SetActive(true);
    }
}
