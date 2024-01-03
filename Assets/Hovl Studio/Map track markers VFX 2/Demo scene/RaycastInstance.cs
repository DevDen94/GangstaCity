using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RaycastInstance : MonoBehaviour
{
    public Camera Cam;
    public GameObject[] Prefabs;
    private int Prefab;
    private Ray RayMouse;
    private GameObject Instance;
    private float windowDpi;

    //Double-click protection
    private float buttonSaver = 0f;

    void Start()
    {
        if (ControlFreak2.CFScreen.dpi < 1) windowDpi = 1;
        if (ControlFreak2.CFScreen.dpi < 200) windowDpi = 1;
        else windowDpi = ControlFreak2.CFScreen.dpi / 200f;
        Counter(0);
    }

    void Update()
    {
        if (ControlFreak2.CF2Input.GetButtonDown("Fire1"))
        {
            if (Cam != null)
            {
                RaycastHit hit;
                var mousePos = ControlFreak2.CF2Input.mousePosition;
                RayMouse = Cam.ScreenPointToRay(mousePos);
                if (Physics.Raycast(RayMouse.origin, RayMouse.direction, out hit, 40))
                {
                    Instance = Instantiate(Prefabs[Prefab]);
                    Instance.transform.position = hit.point + hit.normal * 0.01f;
                    Destroy(Instance, 1.5f);
                }
            }
            else
            {
                Debug.Log("No camera");
            }          
        }

        if ((ControlFreak2.CF2Input.GetKey(KeyCode.A) || ControlFreak2.CF2Input.GetAxis("Horizontal") < 0) && buttonSaver >= 0.4f)// left button
        {
            buttonSaver = 0f;
            Counter(-1);
        }
        if ((ControlFreak2.CF2Input.GetKey(KeyCode.D) || ControlFreak2.CF2Input.GetAxis("Horizontal") > 0) && buttonSaver >= 0.4f)// right button
        {
            buttonSaver = 0f;
            Counter(+1);
        }
        buttonSaver += Time.deltaTime;
    }

    void OnGUI()
    {
        GUI.Label(new Rect(10 * windowDpi, 5 * windowDpi, 400 * windowDpi, 20 * windowDpi), "Use the keyboard buttons A/<- and D/-> to change prefabs!");
        GUI.Label(new Rect(10 * windowDpi, 20 * windowDpi, 400 * windowDpi, 20 * windowDpi), "Use left mouse button for instancing!");
    }

    void Counter(int count)
    {
        Prefab += count;
        if (Prefab > Prefabs.Length - 1)
        {
            Prefab = 0;
        }
        else if (Prefab < 0)
        {
            Prefab = Prefabs.Length - 1;
        }
    }
}
