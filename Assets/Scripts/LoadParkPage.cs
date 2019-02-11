using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;
using UnityEngine;

public class LoadParkPage : MonoBehaviour
{
    private static string path = "Assets/Resources/parks.txt";

    public Text Name;
    public Text Description;

    // Start is called before the first frame update
    void Start()
    {
        Name.text = GetName();
        Description.text = GetDescription();
    }

    private string GetDescription(){
        StreamReader sr = new System.IO.StreamReader(path);
        string line;
        while ((line = sr.ReadLine()) != null)
        {
            if (line == PlayerPrefs.GetString("ParkToLoad"))
            {
                //we know we have the park name
                line = sr.ReadLine(); //this is the paragraph we want
                return line;
            }
        }
        return "No Park Description";
    }

    private string GetName()
    {
        return PlayerPrefs.GetString("ParkToLoad");
    }
}