using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    public bool x, y, z;
    private void OnEnable()
    {
        // Start coroutine based on the provided boolean flags
        if (x || y || z)
        {
            StartCoroutine(RotateObjectCoroutine());
        }
    }
   

    private IEnumerator RotateObjectCoroutine()
    {
        while (x|| y|| z)
        {
            // Rotate the object based on the selected axes
            if (x)
                transform.Rotate(Vector3.right *  3f);

            if (y)
                transform.Rotate(Vector3.up *  3f);

            if (z)
                transform.Rotate(Vector3.forward *  3f);

            // Yielding null here will make the coroutine wait for the next frame
            yield return null;
        }
    }

}
