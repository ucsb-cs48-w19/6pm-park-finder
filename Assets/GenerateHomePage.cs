using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class GenerateHomePage : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnGUI()
    {
        StreamReader sr = new StreamReader("Assets/Resources/park_names.txt");

        string line;
        while((line = sr.ReadLine()) != null)
        {
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
