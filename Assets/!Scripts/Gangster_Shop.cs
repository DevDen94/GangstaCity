using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Gangster", menuName = "Gangster")]
public class Gangster_Shop : ScriptableObject
{
    public string Name;
    public int Hats;
    //public int Shirts;
    public int Jackets;
    public int Pants;
    public int Shoes;
    public int Glasses;

    public Material Hat_Material;
    //public Material Shirt_Material;
    public Material Jacket_Material;
    public Material Pant_Material;
    public Material Glasses_Material;
    public Material Shoe_Material;

    public Texture[] Hat_Textures;
    //public Sprite[] Shirt_Textures;
    public Texture[] Jacket_Textures;
    public Texture[] Pant_Textures;
    public string[] Glasses_Textures;
    public Texture[] Shoe_Textures;


    public Material DummyHat;
    public Material DummyJacket;
    public Material DummyPant;
    public Material Dummy_Glasses;
    public Material DummyShoe;

}
