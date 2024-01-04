using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PedestrianSystem;
public class DestroyAfter : MonoBehaviour
{
    public bool Destroy_;
    public GameObject Mesh;
    void Start()
    {
        Invoke("Destroyn", 3f);
    }
    void Destroyn()
    {
        Destroy(gameObject);
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "TrafficCar" && Destroy_)
        {
            Instantiate(Mesh, other.gameObject.transform.position, other.gameObject.transform.rotation);
            Destroy(other.gameObject);

        }
        if (other.gameObject.tag == "NPC" && Destroy_)
        {
            other.gameObject.GetComponent<Pedestrian>().deathvalue = 0;
            other.gameObject.GetComponent<Pedestrian>().OnPedDamage();
            Destroy(other.gameObject);

        }
    }
}
