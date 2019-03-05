using System.Collections;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.Networking;
using System.Globalization;
using Mapbox.Unity.Location;
using Mapbox.Utils;
using Mapbox.Unity.Utilities;

    [System.Serializable]
    public class SearchableObject
    {
        public GameObject searchObject;

        public SearchableObject(GameObject searchObject)
        {
            this.searchObject = searchObject;
        }
    }

    public class SearchBar : MonoBehaviour
    {

        private static string phpUrl = "https://server-for-parkfinder.000webhostapp.com/get_park_names.php";

        public GameObject modelObject;
        public List<SearchableObject> currentListings ;

        private List<SearchableObject> searchObjects = new List<SearchableObject>() ;

		private bool isLoc = false ;
		private bool isLex = true ;
        private Vector2d currentLocation = new Vector2d(0.0, 0.0);
<<<<<<< HEAD
=======
		private enum Order {Lex, Loc, Rat} ;
		private int order = (int) Order.Lex ;
>>>>>>> bd3c88848cebe166fd90eeac856ff43c2a5301ec

        void Start()
        {
            // use DeviceLocationProvider instead of EditorLocationProvider for production
            /* EditorLocationProvider dd = new EditorLocationProvider() ; */
            /* currentLocation = LatLonToMeters(dd.CurrentLocation.LatitudeLongitude) ; */
            currentLocation[0] = 34.413963;
            currentLocation[1] = -119.848946;
            currentLocation = Conversions.LatLonToMeters(currentLocation);
            var coroutine = addSearchObjectsFromDatabase();
            StartCoroutine(coroutine);

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
<<<<<<< HEAD
                for (int ii = 0; ii < ParkNamesLocs.Length; ii += 2)
                {
                    string parkName = ParkNamesLocs[ii];
                    if (parkName == "") continue;
                    string[] ll = ParkNamesLocs[ii + 1].Split(',');
=======
                for (int ii = 0; ii < ParkNamesLocs.Length; ii += 3)
                {
                    string parkName = ParkNamesLocs[ii];
                    if (parkName == "") {
						ii -= 2 ;
						continue;
					}
                    string[] ll = ParkNamesLocs[ii + 1].Split(',');
					string[] rating = ParkNamesLocs[ii + 2].Split(':') ;
>>>>>>> bd3c88848cebe166fd90eeac856ff43c2a5301ec
                    double lat = double.Parse(ll[0], CultureInfo.InvariantCulture);
                    double lon = double.Parse(ll[1], CultureInfo.InvariantCulture);
                    GameObject objToAdd = Instantiate(modelObject) as GameObject;
                    objToAdd.transform.SetParent(this.gameObject.transform, false);
                    objToAdd.name = parkName;
                    SearchBarObject ss = objToAdd.GetComponent<SearchBarObject>();
                    ss.setName();
                    ss.setLatLong(lat, lon);
                    ss.Distance = Vector2d.Distance(Conversions.LatLonToMeters(ss.getLatLong()), currentLocation);
<<<<<<< HEAD
=======
					/* ss.Rating = GetAverageRating(double.Parse(rating[0], CultureInfo.InvariantCulture), (int) double.Parse(rating[1], CultureInfo.InvariantCulture)) ; */
					ss.Rating = GetAverageRating(Convert.ToDouble(rating[0]), Convert.ToInt32(rating[1])) ;
>>>>>>> bd3c88848cebe166fd90eeac856ff43c2a5301ec
                    currentListings.Add(new SearchableObject(objToAdd));
                }
            }
            ReorderLex() ;
            searchObjects.AddRange(currentListings);
        }

        private bool IsInSearchableObjects(string nameToCheck)
        {
            foreach (SearchableObject item in searchObjects)
            {
                if (item.searchObject.name == nameToCheck)
                    return true;
            }
            return false;
        }

        public void OnSearch(string currentText)
        {
            currentListings.Clear();
            List<SearchableObject> list = new List<SearchableObject>();
            foreach (SearchableObject oj in searchObjects)
            {
                if (oj.searchObject.name.StartsWith(currentText, StringComparison.InvariantCultureIgnoreCase))
                {
                    oj.searchObject.SetActive(true);
                    list.Add(oj);
                }
                else
                {
                    oj.searchObject.SetActive(false);
                }
            }
            currentListings.AddRange(list);
			
<<<<<<< HEAD
			if (isLex)
				ReorderLex() ;
			else
				ReorderLoc() ;
=======
			Reorder() ;
>>>>>>> bd3c88848cebe166fd90eeac856ff43c2a5301ec
        }

        public void ReorderLex()
        {
<<<<<<< HEAD
			SetOrder(true) ;
=======
			order = (int) Order.Lex ;
>>>>>>> bd3c88848cebe166fd90eeac856ff43c2a5301ec
            currentListings.Sort((x, y) => x.searchObject.name.CompareTo(y.searchObject.name));
			for (int ii = 0 ; ii < currentListings.Count ; ii++) 
				currentListings[ii].searchObject.transform.SetSiblingIndex(ii) ;

        }
        public void ReorderLoc()
        {
<<<<<<< HEAD
			SetOrder(false) ;
=======
			order = (int) Order.Loc ;
>>>>>>> bd3c88848cebe166fd90eeac856ff43c2a5301ec
            currentListings.Sort((x, y) => x.searchObject.GetComponent<SearchBarObject>().Distance.CompareTo(y.searchObject.GetComponent<SearchBarObject>().Distance));
			for (int ii = 0 ; ii < currentListings.Count ; ii++) 
				currentListings[ii].searchObject.transform.SetSiblingIndex(ii) ;
        }

<<<<<<< HEAD
		private void SetOrder(bool isLex) {
			this.isLex = isLex ;
			this.isLoc = !isLex ;
=======
		public void ReorderRat()
		{
			order = (int) Order.Rat ;
			currentListings.Sort((x, y) => -(x.searchObject.GetComponent<SearchBarObject>().Rating.CompareTo(y.searchObject.GetComponent<SearchBarObject>().Rating)));
			for (int ii = 0 ; ii < currentListings.Count ; ii++) 
				currentListings[ii].searchObject.transform.SetSiblingIndex(ii) ;

		}

		private void Reorder() {
			switch (order) {
				case (int) Order.Lex:
					ReorderLex() ;
					break ;
				case (int) Order.Loc:
					ReorderLoc() ;
					break ;
				case (int) Order.Rat:
					ReorderRat() ;
					break ;
			}
		}

		private double GetAverageRating(double total, int count)
		{
			if (count == 0) return -0.1 ;
			return total / count ;
>>>>>>> bd3c88848cebe166fd90eeac856ff43c2a5301ec
		}


}
