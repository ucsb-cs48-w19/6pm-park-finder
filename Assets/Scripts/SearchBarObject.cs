using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Utils;

public class SearchBarObject : MonoBehaviour
{

    public Text nameText;
	private Vector2d latLong = new Vector2d(0, 0) ;
	private double distance = 0 ;

	public double Distance {
		get {
			return distance ;
		}
		set {
			distance = value ;
		}
	}

    public void setName()
    {
        nameText.text = this.name;
    }

	public void setLatLong(double lat, double lon) {
		latLong[0] = lat ;
		latLong[1] = lon ;
		/* Debug.Log(latLong[0].ToString("0.000000")) ; */
		/* Debug.Log(latLong[1].ToString("0.000000")) ; */
	}

	public Vector2d getLatLong() {
		return latLong ;
	}
}
