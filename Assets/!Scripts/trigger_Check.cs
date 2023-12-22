using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class trigger_Check : MonoBehaviour
{
    public Animator female;
    public Animator male;
    public Mission_Script mission;
    public GameObject Next_P;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            if (PlayerPrefs.GetInt("SelectedGangster") == 0)
            {
                mission.Firts_Character = male;
                mission.Firts_Character.gameObject.SetActive(true);
            }
            else
            {
                mission.Firts_Character = female;
                mission.Firts_Character.gameObject.SetActive(true);
            }
            mission.NextCutScene.SetActive(true);
            GameManger.instance.OFF_TPS();
            gameObject.SetActive(false);
            mission.Start_CutScene();
            Car_Manager.instance.DestinationPoint = Next_P;
            Car_Manager.instance.Set_NavigationDestination();
            mission.Load_Tasklist();
           

        }
    }
}
