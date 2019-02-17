using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using System.IO;

public class ButtonObject : MonoBehaviour
{
    public string text;
    public string name;
    public Button button;
    public GameObject parent;

    private void Start()
    {
        //button = Instantiate(Button);
        //button.onClick.AddListener(handleClick);
    }

    //public void Setup(String parkName, GameObject p)
    public void Setup(String parkName)
    {
        text = name = parkName;
        //parent = p;
        //button.name = parkName;
        //button.GetComponentInChildren(Text).text = parkName;
    }

    private void handleClick()
    {
        //do nothing for now
        Debug.Log("CLICKKKK HANDLED BOI");
    }
}

[System.Serializable]
public class SearchableObject
{
    public GameObject searchObject;
    public string name;
}

public class SearchBar : MonoBehaviour
{
    private static string path = "Assets/Resources/park_names.txt";

    public List<GameObject> searchObjects;

    private List<GameObject> currentListings = new List<GameObject>();

    void Start()
    {
        //create the button UI
        StreamReader sr = new System.IO.StreamReader(path);
        String line = "";
        while ((line = sr.ReadLine()) != null)
        {
            //GameObject test2 = Instantiate(ButtonObject);

            /*
            GameObject test = new GameObject();
            ButtonObject b = test.GetComponent<ButtonObject>();
            //ButtonObject b = new ButtonObject();
            //b.Setup(line, GameObject.Find("SearchBarObjects"));
            b.Setup(line);
            //test.AddComponent(typeof(ButtonObject));
            //b = test.GetComponent<ButtonObject>();
            Debug.Log("OBJECTS:");
            Debug.Log(GameObject.Find("SearchBarObjects"));
            test.transform.SetParent(GameObject.Find("SearchBarObjects").transform);
            searchObjects.Add(test);
            test.SetActive(true);
            //b.button.gameObject.SetActive(true);
            */
            GameObject thisGameObject = this.gameObject;
            ButtonObject b = thisGameObject.AddComponent(typeof(ButtonObject)) as ButtonObject;
            b.Setup(line);
            //b.button = Instantiate(Button) as GameObject;
            b.button.onClick.AddListener(handleClick);
            b.button.name = line;
            searchObjects.Add(b)


        }

        Sort();
        currentListings.AddRange(searchObjects);
        SetPositions();
    }

    private void handleClick()
    {
        Debug.Log("FUUUCK UNITY!!!!");
    }

    private void OnGUI()
    {

        foreach (GameObject obj in searchObjects)
        {
            //Debug.Log("b" + b);
            //Debug.Log("button" + b.button);
            //b.button.gameObject.SetActive(true);
            obj.SetActive(true);
        }

    }

    public void OnSearch(string currentText)
    {
        currentListings.Clear();
        List<GameObject> list = new List<GameObject>();
        foreach (GameObject oj in searchObjects)
        {
            if (oj.name.StartsWith(currentText, StringComparison.InvariantCultureIgnoreCase))
            {
                oj.SetActive(true);
                list.Add(oj);
            }
            else
            {
                oj.SetActive(false);
            }
        }
        currentListings.AddRange(list);

        SetPositions();
    }

    void SetPositions()
    {
        if (currentListings.Count < 0)
            return;
        for (int i = 0; i < currentListings.Count; i++)
        {
            currentListings[i].transform.localPosition = new Vector3(0, -(150 * i), 0);
        }
    }

    void Sort()
    {
        searchObjects.Sort((x, y) => x.name.CompareTo(y.name));
    }

    void OnMouseDown()
    {
        Debug.Log("CLICK REGISTTEREDD");
    }
}
