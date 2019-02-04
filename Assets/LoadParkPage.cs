using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadParkPage : MonoBehaviour
{
    private GameObject wrapper = GameObject.Find("Canvas");
    private GameObject label = wrapper.GetComponent<GUIText>();

    // Start is called before the first frame update
    void Start()
    {
        label.text = PlayerPrefs.GetString("PrevPark");
    }

    // Update is called once per frame
    void Update()
    {

    }
}
