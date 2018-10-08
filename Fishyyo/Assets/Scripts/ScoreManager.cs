using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Fizzyo;

public class ScoreManager : MonoBehaviour {

    /*
    This script is for implementing the score system at the top left, where each fish is equal to 100 points
    */ 

	public int score = 0;		// the actual score
	public int targetScore = 0;

	public Text scoreText;
	public GameObject youWon;

	void Start() 
	{
        FishyoSession.Instance.sets = VerifyNumBreaths.selectedSets;
        targetScore = VerifyNumBreaths.selectedBreaths * 100;
        UpdateText();
	}
		
	public void AddPoints(int pointScored)
	{
		score += pointScored;
        UpdateText();

        if (score >= targetScore)
        {
            youWon.SetActive(true);
            switch(FizzyoFramework.Instance.Achievements.PostScore(score / targetScore))
            {
                case FizzyoRequestReturnType.FAILED_TO_CONNECT:
                    print("Connect fail");
                    break;
                default:
                    print("Worked?");
                    break;
            }
        }
	}

    private void UpdateText()
    {
        scoreText.text = ("Score: " + score);
    }
}