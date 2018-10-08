using UnityEngine;
using System.Collections;
//use Fizzyo namespace
using Fizzyo;

public class Hook : MonoBehaviour {

    /*
    This is part of the fisher that is used for emitting the black line (line Renderer), also most the fizzyo device is integrated here
    */

    public GameObject claw;		
	public Animator minerAnimator;
	public Claw clawScript;

	public void LaunchClaw()
	{
        if (clawScript.isFired)
            return;

		minerAnimator.speed = 0f;

		RaycastHit hit;
		Vector3 down = transform.TransformDirection(Vector3.down);

        if (Physics.Raycast(transform.position, down, out hit, 80f))
		{
            clawScript.isFired = true;
			claw.SetActive(true);
			clawScript.ClawTarget(hit.point);
		}
	}

	public void CollectedObject()
	{
		minerAnimator.speed = 1f;
        //FizzyoFramework.Instance.Achievements.UnlockAchievement(AchievementCodes.FIRST_CATCH);
	}
}