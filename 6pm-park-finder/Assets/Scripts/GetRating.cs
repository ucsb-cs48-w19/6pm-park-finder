using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class GetRating : MonoBehaviour
{
	public GameObject star ;
	public GameObject emptyStar ;
	private double rating ;
    private static string phpUrl = "https://server-for-parkfinder.000webhostapp.com/get_park_rating.php";


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
            Debug.Log("GetRating success");
            Debug.Log(parkRating.downloadHandler.text);

            string []results = parkRating.downloadHandler.text.Split('\n');
            double ratingsTotal = Convert.ToDouble(results[0]);
            int numRatings = Convert.ToInt32(results[1]);

            /* Text textField = GameObject.Find("CurrentRating").GetComponent<Text>(); */
            Text textField = this.gameObject.GetComponent<Text>();
			rating = GetAverageRating(ratingsTotal, numRatings) ;
			if (rating < 0)
				textField.text = "Unrated" ;
			else 
				textField.text = rating.ToString("0.00") + "/5" ;
			
        }

		PrintStars() ;
		
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

	// call only once since these prefabs won't be erased
	private void PrintStars() {
		int numStars = (int) Math.Round(rating, MidpointRounding.AwayFromZero) ;
		for (int ii = 0 ; ii < 5 ; ii++) {
            GameObject go;

            if (ii < numStars)
                go = Instantiate(star, new Vector3(52 + 45 * ii, 0, 0), Quaternion.identity);
             
           
            else
                go = Instantiate(emptyStar, new Vector3(52 + 45 * ii, 0, 0), Quaternion.identity);

			go.transform.SetParent(this.gameObject.transform, false) ;
		}
	}

    private string GetName()
    {
        return clean(PlayerPrefs.GetString("ParkToLoad"));
    }

    private double GetAverageRating(double total, int count)
    {
        if (count == 0) return -0.1 ;
        return total / count ;
    }
}
