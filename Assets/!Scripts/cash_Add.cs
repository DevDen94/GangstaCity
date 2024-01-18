using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cash_Add : MonoBehaviour
{
    private void Start()
    {
        Invoke("Delay", 15f);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            Destroy(gameObject);
            PlayerPrefs.SetInt("Cash", PlayerPrefs.GetInt("Cash") + 300);
            GameManger.instance.CashText.text = PlayerPrefs.GetInt("Cash").ToString();
            GameManger.instance.DollarParticles();
        }
    }

    void Delay()
    {
        Destroy(gameObject);
    }
}
