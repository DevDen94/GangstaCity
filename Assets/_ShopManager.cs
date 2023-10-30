using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
public class _ShopManager : MonoBehaviour
{
    public Gangster_Shop[] Gangster;
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
    private void Start()
    {
        Price = PlayerPrefs.GetInt("Cash");   
    }
    public void Set_Hat_Textures(int value)
    {
        No = 1;
        Temp = value;
        EntryName = "Hat";
        Check_Textures();

    }

    public void Set_Glasses_Textures(int value)
    {
        No = 2;
        Temp = value;
        EntryName = "Glasses";
        Check_Textures();
    }

    public void Set_Pant_Textures(int value)
    {
        No = 3;
        Temp = value;
        EntryName = "Pant";
        Check_Textures();
    }
    public void Set_Shoe_Textures(int value)
    {
        No = 4;
        Temp = value;
        EntryName = "Shoe";
        Check_Textures();
    }
    public void Set_Jacket_Textures(int value)
    {
        No = 5;
        Temp = value;
        EntryName = "Jacket";
        Check_Textures();
    }
    public void Check_Textures()   // Check the textures if it's locked or unlocked
    {
        if (PlayerPrefs.GetInt(EntryName + Temp) == 1)
        {
            Buy_Btn.SetActive(false);
            Select_Btn.SetActive(true);
        }
        else
        {
            Buy_Btn.SetActive(true);
            Select_Btn.SetActive(false);
            Entity_PriceText.text = Generic_Prices[Temp].ToString();
        }
    }

    public void Buy_Click()    // Buy btn clicked to check if it's buyable or not
    {
        switch (No)
        {
            case 1:
                if (Price >= Generic_Prices[Temp])
                {
                    PlayerPrefs.SetInt("Cash", Price - Generic_Prices[Temp]);
                    Cash_.text = PlayerPrefs.GetInt("Cash").ToString();
                    PlayerPrefs.SetInt(EntryName +Temp, 1);
                    Check_Textures();
                }
                else
                {
                    Not_EnoughCoins_Panel.SetActive(true);
                }
                break;
           
            default:
             
                break;
        }

    }
}


