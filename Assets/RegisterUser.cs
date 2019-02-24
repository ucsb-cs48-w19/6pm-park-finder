using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RegisterUser : MonoBehaviour
{
    public InputField usernameField;
    public InputField passwordField;
    public InputField emailField;

    public string registerURL = "https://files.000webhost.com/user_creation_request.php";

    // Start is called before the first frame update
    void Start()
    {
        InputField[] inputFields = this.GetComponentsInChildren<InputField>();
        usernameField = inputFields[0];
        passwordField = inputFields[1];
        emailField = inputFields[2];
    }

    // Update is called once per frame
    void Update()
    {
        if (usernameField.isFocused && usernameField.text != "" && Input.GetKey(KeyCode.Return)
            || passwordField.isFocused && passwordField.text != "" && Input.GetKey(KeyCode.Return)
            || emailField.isFocused && emailField.text != "" && Input.GetKey(KeyCode.Return))         {             Debug.Log(usernameField.text);
            Debug.Log(passwordField.text);
            Debug.Log(emailField);

            StartCoroutine(RegisterUser(usernameField.text, passwordField.text, emailField.text));
        }

    }

    private IEnumerator RegisterUser(string username, string password, string email)
    {
        //TODO NEXT TIME YOU PICK THIS UP: 
        //update php so that it checks if username already registered; 
        //upload php file to webiste; CHECK
        //update registerURL to sthat it points to PHP file; CHECK
        //create new database to recieve Users. CHECK
        WWWForm form = new WWWForm();          form.AddField("usernamePost", username);         form.AddField("passwordPost", password);
        form.AddField("emailPost", email);          WWW request = new WWW(registerURL, form);          yield return request;          Debug.Log(request.text);
    }
}
