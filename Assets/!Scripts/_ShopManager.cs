using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
public class _ShopManager : MonoBehaviour
{
    public Gangster_Shop[] Gangster;
    public GameObject[] Gangsters_Model;
    public GameObject Buy_Btn;
    public GameObject Select_Btn;
    public Text Cash_;
    public Text Entity_PriceText;
    public GameObject Not_EnoughCoins_Panel;
    public int[] Generic_Prices;
    private int Temp;
    private string EntryName;
    private int No;
    private int Price;

    public Animator Camera;
    public GameObject Show_UpdatePanel;
    public GameObject[] Costumes_Panel;
    private Gangster_Shop gm;
    private void Start()
    {
        Default_Set();
        Camera.SetInteger("value", 10); gm = Gangster[0];
        Price = PlayerPrefs.GetInt("Cash");
        Cash_.text = Price.ToString();
      
        
       
    }
    public void Default_Set()
    {
        if (!PlayerPrefs.HasKey("Starter"))
        {
           
            PlayerPrefs.SetInt("Starter", 0);
            PlayerPrefs.SetInt("Hat0", 1);
            PlayerPrefs.SetInt("Pant0", 1);
            PlayerPrefs.SetInt("Shoe0", 1);
            PlayerPrefs.SetInt("Jacket0", 1);
            PlayerPrefs.SetInt("Glasses0", 1);
            gm.DummyHat.SetTexture("_BaseMap", gm.Hat_Textures[0]);
            Color newColor = ColorUtility.TryParseHtmlString("#" + gm.Glasses_Textures[0].ToString(), out Color parsedColor) ? parsedColor : Color.white;
            gm.Dummy_Glasses.SetColor("_BaseColor", newColor);
            gm.DummyPant.SetTexture("_BaseMap", gm.Pant_Textures[0]);
            gm.DummyShoe.SetTexture("_BaseMap", gm.Shoe_Textures[0]);
            gm.DummyJacket.SetTexture("_BaseMap", gm.Jacket_Textures[0]);
            gm.Hat_Material.SetTexture("_BaseMap", gm.Hat_Textures[0]);
            gm.Glasses_Material.SetColor("_BaseColor", newColor);
            gm.Pant_Material.SetTexture("_BaseMap", gm.Pant_Textures[0]);
            gm.Shoe_Material.SetTexture("_BaseMap", gm.Shoe_Textures[0]);
            gm.Jacket_Material.SetTexture("_BaseMap", gm.Jacket_Textures[0]);

        }
    }
    public void ShowUpdate(int a)
    {
        if (a == 1)
        {
            Camera.SetInteger("value", 10);
        }
        else
        {
            Show_UpdatePanel.SetActive(true);
        }
    }
    public void Enable_SelecPanel(int no)
    {
        foreach(GameObject a in Costumes_Panel)
        {
            a.SetActive(false);
        }
        Costumes_Panel[no].SetActive(true);
        Camera.SetInteger("value", no);
       
    }
   
    public void Set_Hat_Textures(int value)
    {
        No = 1;
        Temp = value;
        EntryName = "Hat";
        gm.DummyHat.SetTexture("_BaseMap", gm.Hat_Textures[value]);
        Check_Textures();

    }

    public void Set_Glasses_Textures(int value)
    {
        No = 2;
        Temp = value;
        EntryName = "Glasses";
        Color newColor = ColorUtility.TryParseHtmlString("#" + gm.Glasses_Textures[Temp].ToString(), out Color parsedColor) ? parsedColor : Color.white;
        gm.Dummy_Glasses.SetColor("_BaseColor", newColor);
        Check_Textures();
    }

    public void Set_Pant_Textures(int value)
    {
        No = 3;
        Temp = value;
        EntryName = "Pant";
        gm.DummyPant.SetTexture("_BaseMap", gm.Pant_Textures[value]);
        Check_Textures();
    }
    public void Set_Shoe_Textures(int value)
    {
        No = 4;
        Temp = value;
        EntryName = "Shoe";
        gm.DummyShoe.SetTexture("_BaseMap", gm.Shoe_Textures[value]);
        Check_Textures();
    }
    public void Set_Jacket_Textures(int value)
    {
        No = 5;
        Temp = value;
        EntryName = "Jacket";
        gm.DummyJacket.SetTexture("_BaseMap", gm.Jacket_Textures[value]);
        Check_Textures();
    }
    public void Check_Textures()   // Check the textures if it's locked or unlocked
    {
        if (PlayerPrefs.GetInt(EntryName + Temp) == 1)
        {
            Buy_Btn.SetActive(false);
            Select_Btn.SetActive(true);
            ChangeMaterialAll();
        }
        else
        {
            Buy_Btn.SetActive(true);
            Select_Btn.SetActive(false);
            Entity_PriceText.text = Generic_Prices[Temp].ToString();
        }
    }
    public void Set_Textures()
    {
        gameObject.SetActive(false);
        GameManger.instance.Is_Shop = true;
        GameManger.instance.Set_TPS();
        GameManger.instance.Is_Shop = false;
        GameManger.instance.ShopGameObject.SetActive(false);
        GameManger.instance.ShopTrigger.SetActive(true);
        
    }
  
    void ChangeMaterialAll()  // If that specific texture or material color is unlocked then change it in all game
    {
        switch (No)
        {
            case 1:
                   gm.Hat_Material.SetTexture("_BaseMap", gm.Hat_Textures[Temp]);
                break;
            case 2:
                    Color newColor = ColorUtility.TryParseHtmlString("#"+gm.Glasses_Textures[Temp].ToString(), out Color parsedColor) ? parsedColor : Color.white;
                    gm.Glasses_Material.SetColor("_BaseColor", newColor);
                break;
            case 3:
                gm.Pant_Material.SetTexture("_BaseMap", gm.Pant_Textures[Temp]);
                break;
            case 4:
                gm.Shoe_Material.SetTexture("_BaseMap", gm.Shoe_Textures[Temp]);
                break;
            case 5:
                gm.Jacket_Material.SetTexture("_BaseMap", gm.Jacket_Textures[Temp]);
                break;
            default:
                Debug.Log("GO_Through");
                break;
        }
        

    }
    public void Buy_Click()    // Buy btn clicked to check if it's buyable or not
    {
        if (Price >= Generic_Prices[Temp])
        {
            PlayerPrefs.SetInt("Cash", Price - Generic_Prices[Temp]);
            Cash_.text = PlayerPrefs.GetInt("Cash").ToString();
            PlayerPrefs.SetInt(EntryName + Temp, 1);
            Check_Textures();
        }
        else
        {
            Not_EnoughCoins_Panel.SetActive(true);
        }

    }
}


