using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer_Destroy : MonoBehaviour
{
    public int timer;
    // Start is called before the first frame update
    void Start()
    {
        Invoke("Delay", timer);
    }

 void Delay()
    {
        Destroy(gameObject);
    }
}
