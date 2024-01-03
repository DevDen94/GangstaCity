using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerNavigation : MonoBehaviour
{
    public Transform player; // Array of player Transforms
    public bool GameEndl;
    public static PlayerNavigation instance; 
    private void Start()
    {
        instance = this;
        player = GameManger.instance.ThirdPersonPLayer.transform;
    }
    private void Update()
    {
        if (GameEndl)
            return;

        if (player !=null)
        {
            transform.position = player.position;
            transform.rotation = player.rotation;
        }
        
        
    }

  
}
