using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerNavigation : MonoBehaviour
{
    public Transform player; // Array of player Transforms
    public bool GameEndl;

    private void Start()
    {
        player = GameManger.instance.ThirdPersonPLayer.transform;
    }
    private void Update()
    {
        if (GameEndl)
            return;


         transform.position = player.position;
         transform.rotation = player.rotation;
        
    }

  
}
