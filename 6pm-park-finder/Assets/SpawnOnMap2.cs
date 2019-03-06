namespace Mapbox.Examples
{
    using UnityEngine;
    using Mapbox.Utils;
    using Mapbox.Unity.Map;
    using Mapbox.Unity.MeshGeneration.Factories;
    using Mapbox.Unity.Utilities;
    using System.Collections.Generic;
    using System.IO;
    using UnityEngine.Networking;
    using System.Collections;

    public class SpawnOnMap2: MonoBehaviour
    {
        [SerializeField]
        AbstractMap _map;

        [SerializeField]
        [Geocode]
        string[] _locationStrings;
        Vector2d[] _locations;

        [SerializeField]
        float _spawnScale = 100f;

        [SerializeField]
        GameObject _markerPrefab;

        List<GameObject> _spawnedObjects;

        string path = "Assets/Resources/park_locs.txt";
        private static string phpUrl = "https://server-for-parkfinder.000webhostapp.com/get_park_locs.php";


        void Start()
        {
            var coroutine = GetLocStrings();
            StartCoroutine(coroutine);

            //var coroutine = 
            /*
            //create location strings
            _locationStrings = new string[4];
            StreamReader sr = new System.IO.StreamReader(path);
            string line;
            int j = 0;
            while ((line = sr.ReadLine()) != null)
            {
                _locationStrings[j] = line;
                j++;
            }
            */
            /*
            _locations = new Vector2d[_locationStrings.Length];
            _spawnedObjects = new List<GameObject>();
            for (int i = 0; i < _locationStrings.Length; i++)
            {
                var locationString = _locationStrings[i];
                _locations[i] = Conversions.StringToLatLon(locationString);
                var instance = Instantiate(_markerPrefab);
                instance.transform.localPosition = _map.GeoToWorldPosition(_locations[i], true);
                instance.transform.localScale = new Vector3(_spawnScale, _spawnScale, _spawnScale);
                _spawnedObjects.Add(instance);
            }
            */
        }

        private IEnumerator GetLocStrings()
        {
            var locs = UnityWebRequest.Get(phpUrl);
            //WWW parkCharacteristics = new WWW(phpUrl, form);

            yield return locs.SendWebRequest();
            //yield return parkCharacteristics;


            if (locs.isNetworkError || locs.isHttpError)
            {
                print("Error downloading: " + locs.error);
                //description = "error";
                Debug.Log("ERROR");
            }
            else
            {
                // show the highscores
                Debug.Log("ABOUT TO PRINT OBJECT");
                Debug.Log(locs.downloadHandler.text);
                //description = parkCharacteristics.downloadHandler.text;
                _locationStrings = locs.downloadHandler.text.Split('\n');
                _locations = new Vector2d[_locationStrings.Length];
                _spawnedObjects = new List<GameObject>();
                for (int i = 0; i < _locationStrings.Length; i++)
                {
                    if (_locationStrings[i] == "") continue;
                    var locationString = _locationStrings[i];
                    _locations[i] = Conversions.StringToLatLon(locationString);
                    var instance = Instantiate(_markerPrefab);
                    instance.transform.localPosition = _map.GeoToWorldPosition(_locations[i], true);
                    instance.transform.localScale = new Vector3(_spawnScale, _spawnScale, _spawnScale);
                    _spawnedObjects.Add(instance);
                }
            }
        }

        private void Update()
        {
     
        }
    }
}