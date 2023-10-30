using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerNavigation : MonoBehaviour
{
    public Transform player; // Array of player Transforms


    private void Update()
    {
         transform.position = player.position;
         transform.rotation = player.rotation;
        
    }

  
}
