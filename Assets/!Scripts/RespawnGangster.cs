using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class RespawnGangster : MonoBehaviour
{
    public GameObject[] Gangster;
    public GameObject Canvas;
    
    public Button GangsterBtn;
    public Button FemaleGangsterBTn;
    public GameObject Gangster_SelecteddBtn;
    public GameObject Female_SelectedBtn;
    public GameObject FadeScreen;
    public GameManger gm;
    private bool isCounting = false;
    public GameObject Player_Current;
    public Text counterText;
    private float countdownTime = 3f;
    public GameObject Panel_;
    public GameObject Panel_G;

    public Text CharacterText;
    private void Start()
    {
        gm = GetComponent<GameManger>();
        GangsterBtn.onClick.AddListener(Start_Counter);
        FemaleGangsterBTn.onClick.AddListener(Start_Counter);
    }
    private void Update()
    {
        if (isCounting)
        {
            Panel_G.SetActive(true);
            countdownTime -= Time.deltaTime;
            counterText.text = Mathf.RoundToInt(countdownTime).ToString();
            if (countdownTime <= 0)
            {
                Panel_.SetActive(false);
                Panel_G.SetActive(false);
                StopCountdown();
            }
        }
    }

    public GameObject CinematicCamera;
    public void Start_Counter()
    {
        isCounting = true;
        if (gm.Tutorial)
        {
            TutorialScene.instance.cs.Text_Panel.SetActive(false);
            TutorialScene.instance.load_tutt();
        }
        
    }
  
    public void ChangeGangster()
    {
        if (gm.currentGangster == 0)
        {
            gm.currentGangster = 1;
            gm.ThirdPersonPLayer = Instantiate(Gangster[gm.currentGangster], Player_Current.transform.position, Player_Current.transform.rotation);
            Gangster_SelecteddBtn.SetActive(false);
            Female_SelectedBtn.SetActive(true);
            PlayerPrefs.SetInt("SelectedGangster", gm.currentGangster);
            CharacterText.text = "LISA";
            Car_Manager.instance.PressGun(3);
            Car_Manager.instance.PressGun(3);

        }
        else
        {
            gm.currentGangster = 0;
            gm.ThirdPersonPLayer = Instantiate(Gangster[gm.currentGangster], Player_Current.transform.position, Player_Current.transform.rotation);
            Gangster_SelecteddBtn.SetActive(true);
            Female_SelectedBtn.SetActive(false);
            PlayerPrefs.SetInt("SelectedGangster", gm.currentGangster);
            CharacterText.text = "MICHAEL";
        }

        Player_Current.GetComponent<PlayerNavigation>().player = gm.ThirdPersonPLayer.transform;
        gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().SpawningEffect.SetActive(true);
        Canvas.SetActive(false);
        foreach(GameObject a in gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().Meshes)
        {
            a.SetActive(false);
        }
        Invoke("EnableCharacter", 0.4f);
        Invoke("EnableTps", 5f);
        gm.AssignPlayerReference();
    }
    void StopCountdown()
    {
        isCounting = false;
        countdownTime = 0; 
        counterText.text = "0";
        FadeScreen.SetActive(true);
        Destroy(gm.ThirdPersonPLayer);
        Invoke("ChangeGangster", 1f);
    }
    GameObject temp;
    void EnableCharacter()
    {
        temp = Instantiate(CinematicCamera, gm.ThirdPersonPLayer.transform.position, gm.ThirdPersonPLayer.transform.rotation);
        foreach (GameObject a in gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().Meshes)
        {
            a.SetActive(true);
        }
        GetComponent<Car_Manager>().PressGun(3);

    }
    void EnableTps()
    {
        gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().SpawningEffect.SetActive(false);
        Canvas.SetActive(true);
        Destroy(temp);
      
    }

  
}
