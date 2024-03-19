using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Helic_CutScene : MonoBehaviour
{
    public GameObject missilePrefab;
    public Transform spawnPoint;
    public float delayBetweenMissiles = 0.1f;
    public float totalTime = 4f;

    private void Start()
    {
        StartCoroutine(FireMissiles());
    }

    private IEnumerator FireMissiles()
    {
        float elapsedTime = 0f;

        while (elapsedTime < totalTime)
        {
            // Spawn a missile
            Instantiate(missilePrefab, spawnPoint.position, spawnPoint.rotation);

            // Wait for the specified delay
            yield return new WaitForSeconds(delayBetweenMissiles);

            // Update the elapsed time
            elapsedTime += delayBetweenMissiles;
        }
    }
}
