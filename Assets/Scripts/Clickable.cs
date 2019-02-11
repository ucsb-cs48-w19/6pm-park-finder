using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class Clickable : MonoBehaviour, IPointerDownHandler
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("I HAT MY LIFE");
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnPointerDown(PointerEventData eventData)
    {
        Debug.Log("click registered");
        Debug.Log(this.name);
        PlayerPrefs.SetString("ParkToLoad", this.name);
        SceneManager.LoadScene("ParkPage");
    }
}
