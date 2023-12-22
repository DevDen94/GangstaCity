using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class CutSceneManager : MonoBehaviour
{
    public GameObject part1;
    public GameObject part2;
    public GameObject part3;
    public GameObject Tuttorial;
    public GameObject Tutorial_Starting;
    public string[] Instructions;
    public Text TextField;
    public GameObject UIPanel;
    void Start()
    {
        Time.timeScale = 1f;
        UIPanel.SetActive(false);
        part1.SetActive(true);
         Invoke("part1_A", 7.30f);
        //Set_TutorialActive();
    }
    void part1_A()
    {
        part1.SetActive(false);
        part2.SetActive(true);

    }
  public  void part2_A()
    {
        part2.SetActive(false);
        part3.SetActive(true);
        Invoke("Set_TutorialActive", 17.5f);
    }

    void Set_TutorialActive()
    {
        part3.SetActive(false);
      
        Tutorial_Starting.SetActive(true);
        Invoke("secondsDelay", 2f);
        GameObject a = GameObject.FindGameObjectWithTag("Clone");
       // a.SetActive(false);
    }
    public void SceneChange()
    {
        PlayerPrefs.SetInt("MissionNo", 1);
        PlayerPrefs.SetInt("Mode_Select", 1);
        SceneManager.LoadScene("MissionMode");
    }
    void secondsDelay()
    {
        Tuttorial.SetActive(true);
        Text_Panel.SetActive(true);
        TextField.gameObject.SetActive(true);
        TextField.text = Instructions[0].ToString();


    }
    public GameObject tutorial_MainGameObject;
    public GameObject Text_Panel;
    public GameObject ShopGameobject;
    public GameObject ShopPanel;
    public void OpenTutorailScene()
    {
        UIPanel.SetActive(true);
        Text_Panel.SetActive(false);
        Destroy(Tutorial_Starting);
        ShopGameobject.SetActive(true);
        tutorial_MainGameObject.GetComponent<TutorialScene>().enabled = true;
        ShopPanel.SetActive(true);
    }
   
}
