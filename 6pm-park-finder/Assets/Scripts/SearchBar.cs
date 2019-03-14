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
		private enum Order {Lex, Loc, Rat} ;
		private int order = (int) Order.Lex ;

        void Start()
        {
			var dd = LocationProviderFactory.Instance.DefaultLocationProvider ;
            currentLocation = Conversions.LatLonToMeters(dd.CurrentLocation.LatitudeLongitude) ;
            var coroutine = addSearchObjectsFromDatabase();
            StartCoroutine(coroutine);

        }

        private IEnumerator addSearchObjectsFromDatabase()
        {
            //make a database query
            //returns the description
            var parkNames = UnityWebRequest.Get(phpUrl);

            yield return parkNames.SendWebRequest();


            if (parkNames.isNetworkError || parkNames.isHttpError)
            {
                print("Error downloading: " + parkNames.error);
            }
            else
            {
                // show the highscores
                // update distances only on loading of scene
                string[] ParkNamesLocs = parkNames.downloadHandler.text.Split('\n');
                for (int ii = 0; ii < ParkNamesLocs.Length; ii += 3)
                {
                    string parkName = ParkNamesLocs[ii];
                    if (parkName == "") {
						ii -= 2 ;
						continue;
					}
                    string[] ll = ParkNamesLocs[ii + 1].Split(',');
					string[] rating = ParkNamesLocs[ii + 2].Split(':') ;
                    double lat = double.Parse(ll[0], CultureInfo.InvariantCulture);
                    double lon = double.Parse(ll[1], CultureInfo.InvariantCulture);
                    GameObject objToAdd = Instantiate(modelObject) as GameObject;
                    objToAdd.transform.SetParent(this.gameObject.transform, false);
                    objToAdd.name = parkName;
                    SearchBarObject ss = objToAdd.GetComponent<SearchBarObject>();
                    ss.setName();
                    ss.setLatLong(lat, lon);
                    ss.Distance = Vector2d.Distance(Conversions.LatLonToMeters(ss.getLatLong()), currentLocation);
					ss.Rating = GetAverageRating(Convert.ToDouble(rating[0]), Convert.ToInt32(rating[1])) ;
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
			
			Reorder() ;
        }

        public void ReorderLex()
        {
			order = (int) Order.Lex ;
            currentListings.Sort((x, y) => x.searchObject.name.CompareTo(y.searchObject.name));
			for (int ii = 0 ; ii < currentListings.Count ; ii++) 
				currentListings[ii].searchObject.transform.SetSiblingIndex(ii) ;

        }
        public void ReorderLoc()
        {
			order = (int) Order.Loc ;
            currentListings.Sort((x, y) => x.searchObject.GetComponent<SearchBarObject>().Distance.CompareTo(y.searchObject.GetComponent<SearchBarObject>().Distance));
			for (int ii = 0 ; ii < currentListings.Count ; ii++) 
				currentListings[ii].searchObject.transform.SetSiblingIndex(ii) ;
        }

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
		}


}
