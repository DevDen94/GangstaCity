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
    public bool AutofireMode;
    public Transform Parent;
    bool StartGet;
    void Start()
    {
        StartGet = false;
        Invoke("Start_Delay", 1f);
        
      
    }
    void Start_Delay()
    {
        PlayerDeath = false;
        FindTarget();
        if (isPlayerShooter)
        {
            AutofireMode = false;
            FireModeOn();
        }
        else
        {
            StartCoroutine(FirePoliceRoutine());
        }
        StartGet = true;
    }
    public void FireModeOn()
    {
        StartCoroutine(FirePlayerRoutine());
    }

       public float distance;
    private void Update()
    {
        if (StartGet)
        {
            if (target == null)
            {
                FindTarget();
                if (isPlayerShooter)
                {
                    AutofireMode = false;
                    Car_Manager.instance.AutoFire_On.SetActive(true);
                    Car_Manager.instance.AutoFire_Off.SetActive(false);
                }
            }
            else
            {
                transform.LookAt(target);
               
            }
        }
    }
    public Transform policeShoot_LOOKAt;
    void FindTarget()
    {
       
        if (isPoliceShooter)
        {
            //Debug.LogError(Car_Manager.instance.name);
            if (Car_Manager.instance.target_RccCar==null)
                return;

            target = Car_Manager.instance.target_RccCar;
        }
        else
        {
            if (Car_Manager.instance.target_PoliceCar==null )
                return;

            target = Car_Manager.instance.target_PoliceCar;
        }

    }
    public Animator PoliceMen;
    IEnumerator FirePlayerRoutine()
    {
        while (!PlayerDeath) // Check if player is alive
        {
            yield return new WaitForSeconds(fireInterval);
            if (target)
            {
               
                distance = Vector3.Distance(transform.position, target.position);
                if (distance <= 100 && AutofireMode)
                {

                    Ray ray = new Ray(GunPoint.position, transform.forward); // Create a ray from the gunpoint forward

                    if (Physics.Raycast(ray, out RaycastHit hit, rayDistance)) // Cast the ray
                    {
                        if ( hit.collider.gameObject.tag == "Police")
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
                else
                {
                    Debug.LogError("Waiting for target or something");
                }
            }
            
        }
    }
    IEnumerator FirePoliceRoutine()
    {
        while (true) // Check if player is alive
        {
           
            yield return new WaitForSeconds(fireInterval);
            if (target)
            {
                distance = Vector3.Distance(transform.position, target.position);
                if (distance <= 200)
                {
                    Ray ray = new Ray(GunPoint.position, transform.forward); // Create a ray from the gunpoint forward

                    if (Physics.Raycast(ray, out RaycastHit hit, rayDistance)) // Cast the ray
                    {
                        if (hit.collider.gameObject.tag == "Player")
                        {
                            Debug.LogError("Shoot");
                            hit.collider.gameObject.GetComponent<Damage_Script>().Damage();
                        }
                        
                        src.PlayOneShot(shoot);
                    }
                    PoliceMen.SetBool("shoot", true);
                    muzzleFlash.SetActive(true);
                    yield return new WaitForSeconds(2f);
                    muzzleFlash.SetActive(false);
                    PoliceMen.SetBool("shoot", false);

                }
                else
                {
                    Debug.LogError("Waiting for target or something");
                }
            }

        }
    }
}
