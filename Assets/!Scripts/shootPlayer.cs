using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shootPlayer : MonoBehaviour
{

    public float rayDistance = 100f; // Maximum distance the ray can travel
    public Transform target;
    public Transform GunPoint;
    public float fireInterval=3f;
    public AudioSource src;
    public AudioClip shoot;
    public bool PlayerDeath;
    public float rayThickness = 1f;
    public bool isPoliceShooter;
    public bool isPlayerShooter;
    public GameObject muzzleFlash;
    void Start()
    {

        FindTarget();
        PlayerDeath = false;
        FireModeOn();
    }
    public void FireModeOn()
    {
        StartCoroutine(FireRoutine());
    }
    private void Update()
    {
        if (target == null)
        {
            FindTarget();
        }
        transform.LookAt(target);
    }
    void FindTarget()
    {
        if (isPoliceShooter)
        {
            target = Car_Manager.instance.target_RccCar;
        }
        else
        {
            target = Car_Manager.instance.target_PoliceCar;
        }
    }
    IEnumerator FireRoutine()
    {
        while (!PlayerDeath) // Check if player is alive
        {
           /* if (isPlayerShooter)
            {
                if (!Car_Manager.instance.attackon)
                {
                    yield break;
                }
            }*/
            yield return new WaitForSeconds(fireInterval);
            Ray ray = new Ray(GunPoint.position, transform.forward); // Create a ray from the gunpoint forward
          
            if (Physics.Raycast(ray, out RaycastHit hit, rayDistance)) // Cast the ray
            {
                if (hit.collider.gameObject.tag == "Player" || hit.collider.gameObject.tag == "Police")
                {
                    Debug.LogError("Shoot");
                    hit.collider.gameObject.GetComponent<Damage_Script>().Damage();
                }
             
                src.PlayOneShot(shoot);
            }
            muzzleFlash.SetActive(true);
            yield return new WaitForSeconds(0.5f);
            muzzleFlash.SetActive(false);
            
        }
    }
}
