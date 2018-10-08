using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Fizzyo;

public class MainMenu : MonoBehaviour {

    public void PlayGame()
    {
        SceneManager.LoadScene("NewSession");
    }

    public void Collection()
    {
        SceneManager.LoadScene("Collection");
    }

    public void QuitGame()
    {
        Application.Quit();
    }

}
