using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class GetRating : MonoBehaviour
{
    private static string phpUrl = "https://server-for-parkfinder.000webhostapp.com/get_park_rating.php";
    private static int numRatings;
    private static double ratingsTotal;


    // Start is called before the first frame update
    void Start()
    {
        var coroutine = Rate();
        StartCoroutine(coroutine);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private IEnumerator Rate()
    {
        WWWForm form = new WWWForm();

        form.AddField("ParkName", GetName());

        var parkRating = UnityWebRequest.Post(phpUrl, form);
        yield return parkRating.SendWebRequest();

        if (parkRating.isNetworkError || parkRating.isHttpError)
        {
            print("Error downloading: " + parkRating.error);
            Debug.Log("ERROR");
        }
        else
        {
            Debug.Log("ABOUT TO PRINT OBJECT");
            Debug.Log(parkRating.downloadHandler.text);

            string []results = parkRating.downloadHandler.text.Split('\n');
            ratingsTotal = Convert.ToDouble(results[0]);
            numRatings = Convert.ToInt32(results[1]);

            Text textField = GameObject.Find("Current Rating").GetComponent<Text>();
            textField.text = "Current Rating: " + GetAverageRating().ToString();
        }

    }

    private string clean(string str)
    {
        string retStr = "";

        foreach (char c in str)
        {
            if (c == '\'')
            {

                retStr += '\''; // add escape character
            }
            retStr += c;
        }
        Debug.Log(retStr);

        return retStr;
    }

    private string GetName()
    {
        return clean(PlayerPrefs.GetString("ParkToLoad"));
    }

    private double GetAverageRating()
    {
        if (numRatings == 0) return 0;
        double temp = numRatings;
        return ratingsTotal / numRatings;
    }
}
