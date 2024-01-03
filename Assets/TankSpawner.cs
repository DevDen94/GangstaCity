using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TankSpawner : MonoBehaviour
{
    public GameObject TankCanvas;
    public Button TankIn;
    public Button TankOut;
    public GameObject fade_Screen;
    public GameObject ReferenceTank;
    public GameObject SpawnPos;
    public GameObject Active_tank;
    public RTC_MainCamera cam; public PlayerNavigation playerNav;
    public GameObject TempTank;
    public static TankSpawner instance;
    GameManger gm;
    void Start()
    {
        instance = this;
        TankIn.onClick.AddListener(SpawnPlayerTank);
        TankOut.onClick.AddListener(RideOff);
        gm = GetComponent<GameManger>();
    }

    void SpawnPlayerTank()
    {


        gm.OFF_TPS();
        fade_Screen.SetActive(true);
        TempTank.SetActive(false);
        TankCanvas.SetActive(true);
        cam.gameObject.SetActive(true);
        Active_tank = Instantiate(ReferenceTank, SpawnPos.transform.position, SpawnPos.transform.rotation);
        cam.currentTank = Active_tank.transform;
        playerNav.player = Active_tank.transform;
        TankIn.gameObject.SetActive(false);
        TankOut.gameObject.SetActive(true);

    }
    void RideOff()
    {
        TempTank.SetActive(true);
        TempTank.transform.SetPositionAndRotation(Active_tank.transform.position, Active_tank.transform.rotation);
        Destroy(Active_tank);
        gm.FadeScreen_Long.SetActive(true);
        gm.Set_TPS();
        gm.ThirdPersonPLayer.transform.SetPositionAndRotation(TempTank.GetComponent<tank_Trigger>().PlayerSpawn.transform.position, TempTank.GetComponent<tank_Trigger>().PlayerSpawn.transform.rotation);
        playerNav.player = gm.ThirdPersonPLayer.transform;
        TankCanvas.SetActive(false);
        cam.gameObject.SetActive(false);
        TankOut.gameObject.SetActive(false);
        ControlFreak2.CFCursor.lockState = CursorLockMode.None;
        ControlFreak2.CFCursor.visible = true;
    }
}
