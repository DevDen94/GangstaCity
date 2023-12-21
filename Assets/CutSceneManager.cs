using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CutSceneManager : MonoBehaviour
{
    public GameObject part1;
    public GameObject part2;
    public GameObject part3;
    public GameObject Tuttorial;
    public GameObject Tutorial_Starting;
    public string[] Instructions;
    public 
    void Start()
    {
        part1.SetActive(true);
        Invoke("part1_A", 7.30f);
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
        Tuttorial.SetActive(true);
        Tutorial_Starting.SetActive(true);
        Invoke("secondsDelay", 4f);
        GameObject a = GameObject.FindGameObjectWithTag("Clone");
        a.SetActive(false);
    }
    void secondsDelay()
    {

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
