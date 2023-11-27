using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class matchDist : MonoBehaviour
{
    public GameObject target;
    void Start()
    {
        target = GameManger.instance.TPS_Controls[2];
    }

    private void FixedUpdate()
    {
        float dist = Vector3.Distance(gameObject.transform.position, target.transform.position);
        if (dist >= 40)
        {
            Destroy(gameObject);
        }
    }
}
