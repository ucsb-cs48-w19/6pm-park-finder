using System.Collections;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.Networking;
using System.Globalization ;
using Mapbox.Unity.Location ;
using Mapbox.Utils ;
using Mapbox.Unity.Utilities ;

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

    private static string phpUrl = "https://server-for-parkfinder.000webhostapp.com/get_park_names.php";

    public GameObject modelObject;

    public List<SearchableObject> searchObjects;

	private List<SearchableObject> currentListings = new List<SearchableObject> ();

	private Vector2d currentLocation = new Vector2d(0.0, 0.0) ;

    void Start ()
	{
		// use DeviceLocationProvider instead of EditorLocationProvider for production
		/* EditorLocationProvider dd = new EditorLocationProvider() ; */
		/* currentLocation = LatLonToMeters(dd.CurrentLocation.LatitudeLongitude) ; */
		currentLocation[0] = 34.413963 ;
		currentLocation[1] = -119.848946 ;
		currentLocation = Conversions.LatLonToMeters(currentLocation) ;
        var coroutine = addSearchObjectsFromDatabase();
        StartCoroutine(coroutine);
    }

    public Vector2d getVector()
    {
        return currentLocation;
    }

    private void Update()
    {
		/* EditorLocationProvider dd = new EditorLocationProvider() ; */
		/* currentLocation = LatLonToMeters(dd.CurrentLocation.LatitudeLongitude) ; */

    }

    private IEnumerator addSearchObjectsFromDatabase()
    {
        Debug.Log("IN ADD SEARCH OBJECTS");
        //make a database query
        //returns the description
        var parkNames = UnityWebRequest.Get(phpUrl);
        //WWW parkCharacteristics = new WWW(phpUrl, form);

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
			// update distances only on loading of scene
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
                objToAdd.transform.SetParent(this.gameObject.transform);
                objToAdd.name = parkName;
				SearchBarObject ss = objToAdd.GetComponent<SearchBarObject>() ;
				ss.setName();
				ss.setLatLong(lat, lon) ;
				ss.Distance = Vector2d.Distance(Conversions.LatLonToMeters(ss.getLatLong()), currentLocation) ;
                searchObjects.Add(new SearchableObject(objToAdd));
            }
        }
        SortLex();
        currentListings.AddRange(searchObjects);
        SetPositions();
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

	public void SetPositions ()
	{
		if (currentListings.Count < 0)
			return;
		for (int i = 0; i < currentListings.Count; i++) {
			currentListings [i].searchObject.transform.localPosition = new Vector3 (0, -(150 * i), 0);
		}
	}

	public void ReorderLex() {
        currentListings.Sort ((x, y) => x.searchObject.name.CompareTo (y.searchObject.name));
		SetPositions() ;
		
	}
	public void ReorderLoc() {
		currentListings.Sort ((x, y) => x.searchObject.GetComponent<SearchBarObject>().Distance.CompareTo (y.searchObject.GetComponent<SearchBarObject>().Distance)) ;
		SetPositions() ;
	}

	void SortLex ()
	{
        searchObjects.Sort ((x, y) => x.searchObject.name.CompareTo (y.searchObject.name));
	}

}
