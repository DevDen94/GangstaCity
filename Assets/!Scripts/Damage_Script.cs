using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Damage_Script : MonoBehaviour
{
    public int damageValue = 100;
    public float slowMotionDuration = 4f;
    public bool isPlayer;
    public Transform Car_Damge;
    public GameObject flame;
    [HideInInspector]
    public shootPlayer shoot_Human;
    public bool Myself_Police;
    private void Start()
    {
        Invoke("Start_Delay", 2f);
        slowmoCounter = 0;
        playerdeath = false;
    }
    void Start_Delay()
    {
        if (Myself_Police)
        {
            Car_Manager.instance.target_PoliceCar = this.transform;
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
                slowmoCounter = 0;
                Damage();
                StartCoroutine(SlowMotionRoutine());
            }
        }
       
    }
    bool playerdeath;
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
                Invoke("DamageCar_Spawn", 3f);

            }

        }
      
    }
    void DamageCar_Spawn()
    {
        Instantiate(Car_Damge, gameObject.transform.position, transform.rotation);
        Destroy(gameObject);
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
            damageValue = damageValue - 8;
            Car_Manager.instance.CarHit.SetActive(true);
            
        }
        else
        {
            damageValue = damageValue - 40;
        }
       
       
        
    }

}
