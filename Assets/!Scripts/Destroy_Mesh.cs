using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroy_Mesh : MonoBehaviour
{
    void Start()
    {
        Invoke("Destroy_After", 5f);
    }
    void Destroy_After()
    {
        Destroy(gameObject);
    }
 
}
