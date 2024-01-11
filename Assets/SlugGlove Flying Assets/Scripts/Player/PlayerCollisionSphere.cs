using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCollisionSphere : MonoBehaviour
{
    [HideInInspector]
    public PlayerMovement PlayerMov;

 
    public void Setup(PlayerMovement Mov)
    {
        PlayerMov = Mov;
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Concrete")
        {
           // JetSpawner.instance.Button_Out.gameObject.SetActive(true);
            print("abbbbbbbbbbbbbbbbbc");
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Concrete")
        {
          //  JetSpawner.instance.Button_Out.gameObject.SetActive(false);
        }
    }
}
