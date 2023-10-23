using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    public bool x, y, z;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (x)
        {
            transform.Rotate(5f, 0, 0, Space.Self);
        }
        if (y)
        {
            transform.Rotate(0, 5f, 0, Space.Self);
        }
        if (z)
        {
            transform.Rotate(0, 0, 5f, Space.Self);
        }
      
    }
}
