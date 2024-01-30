using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vCamera;
using Invector.vCharacterController;
using Invector;
using Invector.vShooter;
public class CameraLock : MonoBehaviour
{
    public static CameraLock instance;
    public Transform Camera ;
    public float cameraSpeed = 5f;
    public bool isShooting = false;
    public float detectionRadius = 30f;
    public vThirdPersonCamera tp; Transform nearestEnemy;
    private void Start()
    {
        instance = this;
        Camera = GameManger.instance.TPS_Controls[0].transform;
        tp = GameManger.instance.TPS_Controls[0].GetComponent<vThirdPersonCamera>();
    }
    void Update()
    {
        if (isShooting)
        {
            if (GameManger.instance.Tutorial == true)
                return;


            Collider[] colliders = Physics.OverlapSphere(transform.position, detectionRadius, LayerMask.GetMask("Enemy"));

            if (colliders.Length > 0)
            {
                // Find the nearest enemy
                nearestEnemy = FindNearestEnemyWithHealth(colliders);
                tp.lockTarget = nearestEnemy;

            }
            
            if (nearestEnemy != null)
            {
                if (nearestEnemy.gameObject.GetComponent<vHealthController>().currentHealth <= 0)
                {
                    tp.lockTarget = null;
                }
                if (Vector3.Distance(transform.position, nearestEnemy.transform.position) > 30)
                {
                    tp.lockTarget = null;
                    isShooting = false;
                }
            }
        }
       
        
    }

    Transform FindNearestEnemyWithHealth(Collider[] enemies)
    {
        Transform nearestEnemy = null;
        float nearestDistance = Mathf.Infinity;

        foreach (var enemyCollider in enemies)
        {
            vHealthController healthScript = enemyCollider.GetComponent<vHealthController>();

            if (healthScript != null && healthScript.currentHealth > 0)
            {
                float distance = Vector3.Distance(transform.position, enemyCollider.transform.position);
                if (distance < nearestDistance)
                {
                    nearestDistance = distance;
                    nearestEnemy = enemyCollider.transform;
                }
               
               
               
            }
        }

        return nearestEnemy;
    }// Start is called before the first frame update
 
}
