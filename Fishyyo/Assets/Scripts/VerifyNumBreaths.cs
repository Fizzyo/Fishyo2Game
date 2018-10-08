using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Fizzyo;

public class VerifyNumBreaths : MonoBehaviour {

    public static int selectedBreaths = 10;
    public static int selectedSets = 10;
    public static bool breathGood = true;
    public static bool setsGood = true;

	public void CheckBreaths(string text)
    {
        breathGood = int.TryParse(text, out selectedBreaths);
        CheckButton();
    }

    public void CheckSets(string text)
    {
        setsGood = int.TryParse(text, out selectedSets);
        CheckButton();
    }

    public void CheckButton()
    {
        if (breathGood && setsGood)
            transform.localScale = Vector3.one;
        else
            transform.localScale = Vector3.zero;
    }

    public void LoadLevel()
    {
        SceneManager.LoadScene("Sunset");
    }

    public void SelectBoat()
    {
        SceneManager.LoadScene("BoatSelect");
    }

    public void LoadLevelSelect()
    {
        SceneManager.LoadScene("LevelSelect");
    }

    public void NextSet()
    {
        if (FishyoSession.Instance.completeSets + 1 == FishyoSession.Instance.sets)
            FinishSets();
        else
        {
            FishyoSession.Instance.completeSets++;
            LoadLevel();
        }
    }

    public void FinishSets()
    {
        FishyoSession.Instance.completeSets++;

        if (FishyoSession.Instance.sets == FishyoSession.Instance.completeSets)
            FizzyoFramework.Instance.Achievements.UnlockAchievement(AchievementCodes.ALL_SETS);

        SceneManager.LoadScene("MainMenu");
    }
}
