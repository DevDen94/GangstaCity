using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollowTarget : MonoBehaviour
{

    public PlayerMovement Target;
    public float Offset;
    public Transform OffsetDirection;

    // Update is called once per frame
    void Update()
    {
        
        if (JetSpawner.instance.Off_Jet || Target == null)
        {
            Destroy(gameObject);
        }
        Vector3 MPos = Target.transform.position;

        if (Target.Rigid != null)
            MPos = Target.Rigid.position;

        transform.position = MPos + (OffsetDirection.up * Offset);
    }
}
