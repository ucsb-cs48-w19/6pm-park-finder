using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SearchBarObject : MonoBehaviour
{

    public Text nameText;

    public void setName()
    {
        nameText.text = this.name;
    }
}
