using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class UpdateRatings : MonoBehaviour
{
    private static string phpUrl1 = "https://server-for-parkfinder.000webhostapp.com/get_park_rating.php";
    private static string phpUrl2 = "https://server-for-parkfinder.000webhostapp.com/update_ratings.php";
    private static int numRatings;
    private static double ratingsTotal;
	private bool focus = false ;


    // Start is called before the first frame update
    void Start()
    {
        var coroutine = GetRatings();
        StartCoroutine(coroutine);

        // Now, ratingsTotal and numRatings are set.
        // So, now we can update the ratings


    }

    private void Update()
    {
        InputField field = this.gameObject.GetComponent<InputField>();
		double temp ;
        if (focus && field.text != "" && (Input.GetKey(KeyCode.Return) || Input.GetKey("66")))
        {
			Debug.Log("Input is taken") ;
            if (double.TryParse(field.text, out temp) && verifyInput(field.text))
            {
                var coroutine2 = UpdateRatingsDB(field.text);
                StartCoroutine(coroutine2);
				field.text = "Thank you" ;
            }
            else
            {
				field.text = "BAD INPUT" ;
            }
			focus = false ;
        }
		else
			focus = field.isFocused ;
    }

    private IEnumerator UpdateRatingsDB(string newRating)
    {
        numRatings += 1; //set new num rating
        ratingsTotal += Convert.ToDouble(newRating);

        WWWForm form = new WWWForm();
        form.AddField("ParkName", GetName());
        form.AddField("NewRatingsTotal", ratingsTotal.ToString());
        form.AddField("NewNumRatings", numRatings.ToString());

        var updateParkRatings = UnityWebRequest.Post(phpUrl2, form);
        yield return updateParkRatings.SendWebRequest();

        if(updateParkRatings.isNetworkError || updateParkRatings.isHttpError)
        {
            print("Error updating ratings: " + updateParkRatings.error);
            Debug.Log("ERROR");
        }
        else
        {
            Debug.Log(updateParkRatings.downloadHandler.text);
            Debug.Log("Ratings Updated");
        }
    }

    private IEnumerator GetRatings()
    {
        WWWForm form = new WWWForm();

        form.AddField("ParkName", GetName());

        var parkRating = UnityWebRequest.Post(phpUrl1, form);
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

            string[] results = parkRating.downloadHandler.text.Split('\n');
            ratingsTotal = Convert.ToDouble(results[0]);
            numRatings = Convert.ToInt32(results[1]);

            //averageRating = GetOldAverageRating();
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

    //verify that input is a number between 0 and 5.
    private bool verifyInput(string input)
    {
        double inputAsNumber = Convert.ToDouble(input);

        return (0 <= inputAsNumber) && (inputAsNumber <= 5);
    }

    /*
    private double GetOldAverageRating()
    {
        if (numRatings == 0) return 0;
        double temp = numRatings;
        return ratingsTotal / numRatings;
    }
    */
}
