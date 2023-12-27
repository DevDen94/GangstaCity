using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vCharacterController.AI;
using Invector;
using UnityEngine.UI;
public class Damage_Script : MonoBehaviour
{
    public int damageValue = 100;
    public float slowMotionDuration = 4f;
    public bool isPlayer;
    public bool isDamageEnabled;
    public Transform Car_Damge;
    public GameObject flame;
 
    public shootPlayer shoot_Human;
    public bool Myself_Police;
    bool myselfpolice_2;
    public AudioClip policeDeath;
    public AudioSource src;
    GameObject SRC_Audios;
    private void Start()
    {
        Invoke("Start_Delay", 2f);
        slowmoCounter = 0;
        playerdeath = false;
        myselfpolice_2 = false;
    }
    void Start_Delay()
    {
        if (Myself_Police)
        {
            Car_Manager.instance.target_PoliceCar = this.transform;
            myselfpolice_2 = true;
            Transform audioSourceTransform = transform.Find("All Audio Sources");
            if (audioSourceTransform != null)

            {
                SRC_Audios = audioSourceTransform.gameObject;
            }
            else
            {
              //  Debug.LogError("Child object 'All Audio Sources' not found under the parent.");
            }

            if (PlayerPrefs.GetInt("Music") == 1)
            {
                SRC_Audios.gameObject.SetActive(true);

            }
            else
            {
                SRC_Audios.gameObject.SetActive(false);
           
            }
        }
    }
   int slowmoCounter = 0;
    void OnCollisionEnter(Collision collision)
    {
        if (Myself_Police)
            return;

        if (collision.gameObject.tag=="Police")
        {
            slowmoCounter = slowmoCounter + 1;
            
            if (slowmoCounter == 2)
            {
                StartCoroutine(SlowMotionRoutine());
                slowmoCounter = 0;
                Damage();
                
            }
        }
        if (collision.gameObject.tag=="Enemy")
        {
            src.PlayOneShot(policeDeath);
            d_ = collision.gameObject;
            collision.gameObject.GetComponent<vControlAIShooter>()._currentHealth = 0;
            Invoke("Destroy_P", 10f);
            Mission_Script.instance.GangsterDead();

        }
       
    }
    GameObject d_;
    void Destroy_P()
    {
        Destroy(d_);
    }
    public float Dis;
    bool playerdeath;
    private void FixedUpdate()
    { 
        if (myselfpolice_2)
        { 
                if (shoot_Human.target == null)
                {
                    return;
                }
                else
                {
                    Dis = Vector3.Distance(gameObject.transform.position, shoot_Human.target.transform.position);
             
                    if (Dis >= 100)
                    {
                        Destroy(gameObject);
                        Car_Manager.instance.PoliceCop_On = false;
                        Car_Manager.instance.Carbutton_Out.SetActive(true);
                        PoliceSystemActive.instance.PoliceCarPanel.SetActive(true);
                        PoliceSystemActive.instance.PoliceCarPanel.transform.GetChild(0).GetComponent<Text>().text = "Good Job. You are safe now. Now PoliceCar is not Chasing You";
                    if (PlayerPrefs.GetInt("MissionEnable") == 0)
                    {
                        GameManger.instance.MissionActive.SetActive(true);
                    }
                }
            }
            }
    }
    private void Update()
    {
        if (damageValue <= 0 )
        {
            if (isPlayer && !playerdeath)
            {
                playerdeath = true;
                Car_Manager.instance.target_RccCar = null;
                GameManger.instance.Loose_Mission();
               
            }
            else
            {
                if (playerdeath)
                    return;

                Car_Manager.instance.target_PoliceCar = null;
                GetComponent<Rigidbody>().isKinematic = true;
                GetComponent<RCC_CarControllerV3>().enabled = false;
                GetComponent<RCC_AICarController>().enabled = false;
                flame.SetActive(true);
                Destroy(shoot_Human);
                Car_Manager.instance.PoliceCop_On = false;
                Car_Manager.instance.Carbutton_Out.SetActive(true);
               // Debug.LogError("ON");
                Invoke("DamageCar_Spawn", 3f);
                PoliceSystemActive.instance.PoliceCarPanel.SetActive(true);
                PoliceSystemActive.instance.PoliceCarPanel.transform.GetChild(0).GetComponent<Text>().text = "Good Job. You destroyed the Police Car";

                if (PlayerPrefs.GetInt("MissionEnable") == 0 && PlayerPrefs.GetInt("Mode_Select") == 1)
                {
                    GameManger.instance.MissionActive.SetActive(true);
                }

            }

        }
      
    }
    void DamageCar_Spawn()
    {
        Instantiate(Car_Damge, gameObject.transform.position, transform.rotation);
        Destroy(gameObject);
        PoliceSystemActive.instance.PoliceCarPanel.SetActive(false);
    }
    IEnumerator SlowMotionRoutine()
    {
        Time.timeScale = 0.35f; // Adjust the slow-motion factor as needed
        yield return new WaitForSecondsRealtime(slowMotionDuration);
        Time.timeScale = 1f; // Reset time scale to normal speed
    }
    public void Damage()
    {
        if (isPlayer)
        {
            damageValue = damageValue - 3;
            Car_Manager.instance.CarHit.SetActive(true);
            Car_Manager.instance.Your_CurrentCar_Health(damageValue);
            
        }
        else
        {
            damageValue = damageValue -20;
            
        }
       
       
        
    }

}
