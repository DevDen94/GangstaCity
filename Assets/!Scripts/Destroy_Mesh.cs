using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroy_Mesh : MonoBehaviour
{
    public bool Npc_Car;
    public int damage = 100;
    public GameObject Prefab;
    public GameObject Header;
    void Start()
    {
        if (!Npc_Car)
        {
            Invoke("Destroy_After", 5f);
        }
    }
    public void On_Damage()
    {
        if (damage <= 0)
        {
            Instantiate(Prefab, Header.transform.position, Header.transform.rotation);
            Header.SetActive(false);
            return;
        }
        damage = damage - 40;
   
    }
    void Destroy_After()
    {
        Destroy(gameObject);
    }
 
}
