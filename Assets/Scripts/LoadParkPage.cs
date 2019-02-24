using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.Networking;

public class LoadParkPage : MonoBehaviour
{
    private static string path = "Assets/Resources/parks.txt";
    private static string phpUrl = "";
    private static string perlUrl = "https://files.000webhost.com/park_request.pl";
    private static string description = "";

    public Text Name;
    public Text Description;

    private IEnumerator GetDescription()
    {
        //query database
        WWWForm form = new WWWForm();

        //add park name field to the post
        form.AddField("ParkName", GetName());

        //returns the description
        var parkCharacteristics = UnityWebRequest.Post(phpUrl, form);

        yield return parkCharacteristics.SendWebRequest();

        if (parkCharacteristics.isNetworkError || parkCharacteristics.isHttpError)
        {
            print("Error downloading: " + parkCharacteristics.error);
            description = "error";
            Debug.Log("ERROR");
        }
        else
        {
            // show the highscores
            Debug.Log(parkCharacteristics.downloadHandler.text);
            description = parkCharacteristics.downloadHandler.text;
        }

    }

    // Start is called before the first frame update
    void Start()
    {
        Name.text = GetName();
        GetDescription();
        Description.text = description;
    }



    //private IEnumerator query

    private string GetName()
    {
        return PlayerPrefs.GetString("ParkToLoad");
    }
}