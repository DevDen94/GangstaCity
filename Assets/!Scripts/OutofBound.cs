using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OutofBound : MonoBehaviour
{
    public GameObject SpawnPoint;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player" && other.gameObject.layer == LayerMask.NameToLayer("Enemy"))
        {
            GameManger.instance.FadeScreen_Long.SetActive(true);
            GameManger.instance.FadeScreenOutofbounds.SetActive(true);
            Destroy(other.gameObject);
           // Destroy(JetSpawner.instance.Cam);
            GameObject refplayer =JetSpawner.instance.ReferencePlayer[PlayerPrefs.GetInt("SelectedGangster")];
            JetSpawner.instance.Active_Player= Instantiate(refplayer, SpawnPoint.transform.position, SpawnPoint.transform.rotation);
            JetSpawner.instance.playerNav.player = JetSpawner.instance.Active_Player.transform;
        }
        if (other.gameObject.tag == "Player" && other.gameObject.layer == LayerMask.NameToLayer("Player"))
        {
            GameManger.instance.FadeScreen_Long.SetActive(true);
            GameManger.instance.ThirdPersonPLayer.transform.position = GameManger.instance.SpawnPoints[0].transform.position;
            GameManger.instance.ThirdPersonPLayer.transform.rotation = GameManger.instance.SpawnPoints[0].transform.rotation;

        }
    }
}
