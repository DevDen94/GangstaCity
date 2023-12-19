using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class RespawnGangster : MonoBehaviour
{
    public GameObject[] Gangster;
    public GameObject Canvas;
    
    public GameObject GangsterBtn;
    public GameObject FadeScreen;
    public Image fillerImage; // Assign the circular filler image in the Inspector
    public GameManger gm;
    private bool isCounting = false;
    private float countdownTimer = 3f;
    public GameObject Player_Current;
    public Image MainImage;
    public Sprite[] sp;
    private bool isButtonPressed = false;
    private float buttonPressedTime = 0f;
    private void Start()
    {
        gm = GetComponent<GameManger>();
       // GangsterMen.onClick.AddListener(StartCountdown);
    }
    private void Update()
    {
        if (isButtonPressed)
        {
            buttonPressedTime += Time.deltaTime;

            // Update the fill amount based on the button press time
            float fillAmount = Mathf.Clamp01(buttonPressedTime / countdownTimer);
            fillerImage.fillAmount = fillAmount;

            // Check if the button has been held for the required time
            if (buttonPressedTime >= countdownTimer)
            {
                isButtonPressed = false;
                 buttonPressedTime = 0f;
                GangsterBtn.SetActive(false);
                countdownTimer = 3f;
                FadeScreen.SetActive(true);
                Destroy(gm.ThirdPersonPLayer);
                Invoke("ChangeGangster", 1f);
            }
        }
    }

    public GameObject CinematicCamera;

  
    public void ChangeGangster()
    {
        if (gm.currentGangster == 0)
        {
            PlayerPrefs.SetInt("SelectedGangster", 1);
            gm.currentGangster = 1;
            gm.ThirdPersonPLayer = Instantiate(Gangster[gm.currentGangster], Player_Current.transform.position, Player_Current.transform.rotation);
            MainImage.sprite = sp[gm.currentGangster];
        }
        else
        {
            PlayerPrefs.SetInt("SelectedGangster", 0);
            gm.currentGangster = 0;
            gm.ThirdPersonPLayer = Instantiate(Gangster[gm.currentGangster], Player_Current.transform.position, Player_Current.transform.rotation);
            MainImage.sprite = sp[gm.currentGangster];
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
    GameObject temp;
    void EnableCharacter()
    {
        temp= Instantiate(CinematicCamera, gm.ThirdPersonPLayer.transform.position, gm.ThirdPersonPLayer.transform.rotation);
        foreach (GameObject a in gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().Meshes)
        {
            a.SetActive(true);
        }
        GangsterBtn.SetActive(true);
        GetComponent<Car_Manager>().PressGun(3);
    }
    void EnableTps()
    {
        gm.ThirdPersonPLayer.GetComponent<PlayerReferences>().SpawningEffect.SetActive(false);
        Canvas.SetActive(true);
        Destroy(temp);
      
    }

    public void OnButtonPressed()
    {
        isButtonPressed = true;
        buttonPressedTime = 0f;
    }

    public void OnButtonReleased()
    {
        isButtonPressed = false;
        fillerImage.fillAmount = 0f; // Reset the fill amount when the button is released
    }
}
