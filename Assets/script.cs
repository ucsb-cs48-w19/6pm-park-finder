using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class script : MonoBehaviour
{
    public Button Test_Button;

    void Start()
    {
        Test_Button.onClick.AddListener(PrintOut);
    }

    void PrintOut()
    {
        Debug.Log("Test_Button clicked");
        PlayerPrefs.SetString("ParkToLoad", Test_Button.name);
        SceneManager.LoadScene("ParkPage");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
