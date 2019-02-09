using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SearchableObject
{
	public GameObject searchObject;
	public string name;
}

public class SearchBar : MonoBehaviour
{
	public List<SearchableObject> searchObjects;

	private List<SearchableObject> currentListings = new List<SearchableObject> ();

	void Start ()
	{
		Sort ();
		currentListings.AddRange (searchObjects);
		SetPositions ();
	}

	public void OnSearch (string currentText)
	{
		currentListings.Clear ();
		List<SearchableObject> list = new List<SearchableObject> ();
		foreach (SearchableObject oj in searchObjects) {
			if (oj.name.StartsWith (currentText, StringComparison.InvariantCultureIgnoreCase)) {
				oj.searchObject.SetActive (true);
				list.Add (oj);
			} else {
				oj.searchObject.SetActive (false);
			}
		}
		currentListings.AddRange (list);

		SetPositions ();
	}

	void SetPositions ()
	{
		if (currentListings.Count < 0)
			return;
		for (int i = 0; i < currentListings.Count; i++) {
			currentListings [i].searchObject.transform.localPosition = new Vector3 (0, -(150 * i), 0);
		}
	}

	void Sort ()
	{
		searchObjects.Sort ((x, y) => x.name.CompareTo (y.name));
	}

    void OnMouseDown()
    {
        Debug.Log("CLICK REGISTTEREDD");
    }
}
