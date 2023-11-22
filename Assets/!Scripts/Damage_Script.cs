using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Damage_Script : MonoBehaviour
{
    public int damageValue = 100;
    public float slowMotionDuration = 5f;
    public bool isPlayer;
    public Transform Car_Damge;
    public GameObject flame;
    public shootPlayer shoot_Human;
    public bool Myself_Police;
    void OnCollisionEnter(Collision collision)
    {
        if (Myself_Police)
            return;

        if (collision.gameObject.tag=="Police")
        {
            StartCoroutine(SlowMotionRoutine());
        }
       
    }
    private void Update()
    {
        if (damageValue <= 0)
        {
            if (isPlayer)
            {

            }
            else
            {
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
        Time.timeScale = 0.2f; // Adjust the slow-motion factor as needed
        yield return new WaitForSecondsRealtime(slowMotionDuration);
        Time.timeScale = 1f; // Reset time scale to normal speed
    }
    public void Damage()
    {
        if (isPlayer)
        {
            damageValue = damageValue - 2;
        }
        else
        {
            damageValue = damageValue - 20;
        }
       
       
        
    }

}
