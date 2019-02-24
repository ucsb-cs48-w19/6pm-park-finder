using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SearchBarObject : MonoBehaviour
{

    public Text nameText;
	private double[] latLong = new double[2] ;

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

	public double[] getLatLong() {
		return latLong ;
	}
}
