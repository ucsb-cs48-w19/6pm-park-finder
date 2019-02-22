using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestScript : MonoBehaviour
{
    public string username;
    public string password;
    public string email;

    string registerURL = "https://server-for-parkfinder.000webhostapp.com/park_request.php";

    // Start is called before the first frame update
    void Start()
    {
    }

    void Update()
    {
        //this works
        InputField input = this.GetComponent<InputField>();
        if (input.isFocused && input.text != "" && Input.GetKey(KeyCode.Return))
        {
            Debug.Log(input.text);
            StartCoroutine(registerPark(input.text, input.text));
        }
    }

    IEnumerator registerPark(string name, string latlong)
    {
        WWWForm form = new WWWForm();

        form.AddField("ParkNamePost", name);
        form.AddField("LatLongPost", latlong);

        WWW request = new WWW(registerURL, form);

        yield return request;

        Debug.Log(request);
    }
}
