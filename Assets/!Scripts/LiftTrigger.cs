using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LiftTrigger : MonoBehaviour
{
    public Mission_Script ms;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            other.gameObject.transform.SetPositionAndRotation(ms.SpawnPoint.transform.position, ms.SpawnPoint.transform.rotation);
            GameManger.instance.FadeScreen_Long.SetActive(true);
            gameObject.SetActive(false);
        }
    }
}
