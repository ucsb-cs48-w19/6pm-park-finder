﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;

public class access_database : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
       
        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
            var dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available)
            {
                // Create and hold a reference to your FirebaseApp,
                // where app is a Firebase.FirebaseApp property of your application class.
                FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://myapp.firebaseio.com/");
                var app = FirebaseApp.DefaultInstance;


                // Set a flag here to indicate whether Firebase is ready to use by your app.
            }
            else
            {
                UnityEngine.Debug.LogError(System.String.Format(
                  "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                // Firebase Unity SDK is not safe to use here.
            }
        });
        var testCollection = FirebaseDatabase.DefaultInstance.GetReference("TestCollection");
        testCollection.Child("test").Child("testStr").SetValueAsync("CHANGED");
        Debug.Log("CLICKEDDD");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
