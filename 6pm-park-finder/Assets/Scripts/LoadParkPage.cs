using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.Networking;

public class LoadParkPage : MonoBehaviour
{
    private static string path = "Assets/Resources/parks.txt";
    private static string phpUrl = "https://server-for-parkfinder.000webhostapp.com/park_request2.php";
    private static string perlUrl = "https://server-for-parkfinder.000webhostapp.com/park_request.pl";
    private static string description = "";

    public Text Name;
    public Text Description;

    // Start is called before the first frame update
    void Start()
    {
        Name.text = GetName();
        IEnumerator coroutine = GetDescription();
        StartCoroutine(coroutine);
        Description.text = description;
    }

    private IEnumerator GetDescription()
    {
        //query database
        WWWForm form = new WWWForm();

        //add park name field to the post
        string name = clean(GetName());
        form.AddField("ParkName", name);

        //returns the description
        var parkCharacteristics = UnityWebRequest.Post(phpUrl, form);

        yield return parkCharacteristics.SendWebRequest();


        if (parkCharacteristics.isNetworkError || parkCharacteristics.isHttpError)
        {
            print("Error downloading: " + parkCharacteristics.error);
            description = "error";
        }
        else
        {
            // show the highscores
            description = parkCharacteristics.downloadHandler.text;
        }
		Description.text = description ;

    }

    private string clean(string str)
    {
        string retStr = "";
        
        foreach(char c in str)
        {
            if(c == '\'')
            {

                retStr += '\''; // add escape character
            }
            retStr += c;
        }

        return retStr;
    }

    private string GetName()
    {
        return PlayerPrefs.GetString("ParkToLoad");
    }
}
