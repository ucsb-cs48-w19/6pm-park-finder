namespace Mapbox.Examples
{
    using Mapbox.Unity.Location;
    using Mapbox.Unity.Map;
    using System.Collections;
    using System.Collections.Generic;
    using UnityEngine;
    using UnityEngine.Networking;
    using Mapbox.Unity.Location;
    using Mapbox.Utils;
    using Mapbox.Unity.Utilities;

    public class InitMapWithParkLoc : MonoBehaviour
    {
        private static Mapbox.Utils.Vector2d parkLocation;
        private static string phpUrl = "https://server-for-parkfinder.000webhostapp.com/get_park_loc_map.php";

        [SerializeField]
        AbstractMap _map;

        ILocationProvider _locationProvider;

        // Start is called before the first frame update


        private void LateUpdate()
        {

        }

        private void Awake()
        {
            // Prevent double initialization of the map. 
        }



        private IEnumerator getParkLoc()
        {
            WWWForm form = new WWWForm();
            form.AddField("ParkName", clean(getParkName()));

            var parkLoc = UnityWebRequest.Post(phpUrl, form);

            yield return parkLoc.SendWebRequest();


            if (parkLoc.isNetworkError || parkLoc.isHttpError)
            {
                print("Error downloading: " + parkLoc.error);
            }
            else
            {
                parkLocation = Conversions.StringToLatLon(parkLoc.downloadHandler.text);
                var map = LocationProviderFactory.Instance.mapManager;
                transform.localPosition = map.GeoToWorldPosition(parkLocation);

                _locationProvider = LocationProviderFactory.Instance.DefaultLocationProvider;
                _locationProvider.OnLocationUpdated += LocationProvider_OnLocationUpdated;
            }
        }

        protected virtual IEnumerator Start()
        {
            var coroutine = getParkLoc();
            StartCoroutine(coroutine);
            yield return null;

        }

        void LocationProvider_OnLocationUpdated(Unity.Location.Location location)
        {
            location.LatitudeLongitude = parkLocation;


            _locationProvider.OnLocationUpdated -= LocationProvider_OnLocationUpdated;
            _map.Initialize(location.LatitudeLongitude, _map.AbsoluteZoom);
        }

        private string getParkName()
        {
            return PlayerPrefs.GetString("ParkToLoad");
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

            return retStr;
        }
    }
}
