using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class SceneLoader : MonoBehaviour
{

    public void LoadPark(){
        Debug.Log("Loading Park: " + this.name);
        PlayerPrefs.SetString("ParkToLoad", this.name);
    }

    public void LoadScene(string name){
        SceneManager.LoadScene(name);
    }
}