using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopTrigger : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            GameManger.instance.OFF_TPS();
            GameManger.instance.ShopCanvas.SetActive(true);
            GameManger.instance.ShopGameObject.SetActive(true);
            gameObject.SetActive(false);

        }
    }
}
