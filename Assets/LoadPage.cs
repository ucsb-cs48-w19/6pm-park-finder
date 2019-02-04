using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class LoadPage : MonoBehaviour
{
    //public GUIStyle style;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("SCRIPT LOADED");
        //style.normal.textColor = Color.black;
    }

    void OnGUI()
    {
        Debug.Log("GUI LOADED");
        GUI.color = Color.black;
        GUI.Label(new Rect(10, 10, 100, 20), PlayerPrefs.GetString("ParkToLoad"));

        //Here, get the text for the paragraph by querying text file for button name
        string path = "Assets/Resources/parks.txt";
        StreamReader sr = new System.IO.StreamReader(path);
        string line;
        while((line = sr.ReadLine()) != null)
        {
            Debug.Log(PlayerPrefs.GetString("ParkToLoad"));
            Debug.Log(line);
            if (line == PlayerPrefs.GetString("ParkToLoad"))
            {
                //we know we have the park name
                line = sr.ReadLine(); //this is the paragraph we want
                break;
            }
        }


        GUI.Label(new Rect(50,50, 200, 40), line);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
