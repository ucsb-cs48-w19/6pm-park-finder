using System.Collections;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.Networking;
using  System.Globalization ;

[System.Serializable]
public class SearchableObject
{
	public GameObject searchObject;

    public SearchableObject(GameObject searchObject){
        this.searchObject = searchObject;
    }
}

public class SearchBar : MonoBehaviour
{ 

    private static string phpUrlNames = "https://server-for-parkfinder.000webhostapp.com/get_park_names.php";

    public GameObject modelObject;

    public List<SearchableObject> searchObjects;

	private List<SearchableObject> currentListings = new List<SearchableObject> ();

	void Start ()
	{
        var coroutine = addSearchObjectsFromDatabase();
        StartCoroutine(coroutine);
    }

    private void Update()
    {

    }

    private IEnumerator addSearchObjectsFromDatabase()
    {
        Debug.Log("IN ADD SEARCH OBJECTS");
        //make a database query
        //returns the description
        var parkNames = UnityWebRequest.Get(phpUrlNames);
        //WWW parkCharacteristics = new WWW(phpUrlNames, form);

        yield return parkNames.SendWebRequest();
        //yield return parkCharacteristics;


        if (parkNames.isNetworkError || parkNames.isHttpError)
        {
            print("Error downloading: " + parkNames.error);
            //description = "error";
            Debug.Log("ERROR");
        }
        else
        {
            // show the highscores
            Debug.Log("ABOUT TO PRINT OBJECT");
            Debug.Log(parkNames.downloadHandler.text);
            //description = parkCharacteristics.downloadHandler.text;
            string[] ParkNamesLocs = parkNames.downloadHandler.text.Split('\n');
            for (int ii = 0 ; ii < ParkNamesLocs.Length ; ii += 2)
            {
				string parkName = ParkNamesLocs[ii] ;
                if (parkName == "") continue;
				string[] ll = ParkNamesLocs[ii + 1].Split(',') ;
				double lat = double.Parse(ll[0], CultureInfo.InvariantCulture) ;
				double lon = double.Parse(ll[1], CultureInfo.InvariantCulture) ;
                GameObject objToAdd = Instantiate(modelObject) as GameObject;
                objToAdd.transform.parent = this.gameObject.transform;
                objToAdd.name = parkName;
                objToAdd.GetComponent<SearchBarObject>().setName();
				objToAdd.GetComponent<SearchBarObject>().setLatLong(lat, lon) ;
                searchObjects.Add(new SearchableObject(objToAdd));
            }
        }
        Sort();
        currentListings.AddRange(searchObjects);
        SetPositions();
        /*
        StreamReader sr = new System.IO.StreamReader(path);
        string line;
        while ((line = sr.ReadLine()) != null)
        {
            if (line != "" && !IsInSearchableObjects(line))
            {
                print("adding Parlk: " + line);
                GameObject objToAdd = Instantiate(modelObject) as GameObject;
                objToAdd.transform.parent = this.gameObject.transform;
                objToAdd.name = line;
                objToAdd.GetComponent<SearchBarObject>().setName();
                searchObjects.Add(new SearchableObject(objToAdd));
            }
        }
        */
    }

    private bool IsInSearchableObjects(string nameToCheck){
        foreach(SearchableObject item in searchObjects){
            if (item.searchObject.name == nameToCheck)
                return true;
        }
        return false;
    }

	public void OnSearch (string currentText)
	{
		currentListings.Clear ();
		List<SearchableObject> list = new List<SearchableObject> ();
		foreach (SearchableObject oj in searchObjects) {
            if (oj.searchObject.name.StartsWith (currentText, StringComparison.InvariantCultureIgnoreCase)) {
				oj.searchObject.SetActive (true);
				list.Add (oj);
			} else {
				oj.searchObject.SetActive (false);
			}
		}
		currentListings.AddRange (list);

		SetPositions ();
	}

	void SetPositions ()
	{
		if (currentListings.Count < 0)
			return;
		for (int i = 0; i < currentListings.Count; i++) {
			currentListings [i].searchObject.transform.localPosition = new Vector3 (0, -(150 * i), 0);
		}
	}

	void Sort ()
	{
        searchObjects.Sort ((x, y) => x.searchObject.name.CompareTo (y.searchObject.name));
	}
}
