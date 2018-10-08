using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fizzyo;

public class PowerBar : MonoBehaviour {

    public Hook hook;
    public Claw claw;

    private bool isBreathing = false;
    private int breathCount = 0;
    private string PerfectBreathUID = "";

    private Image powerBar;

	void Start()
    {
        FizzyoFramework.Instance.Recogniser.BreathStarted += OnBreathStarted;
        FizzyoFramework.Instance.Recogniser.BreathComplete += OnBreathEnded;
        powerBar = GetComponent<Image>();
        powerBar.fillAmount = 0f;
    }

    void OnBreathStarted(object sender)
    {
        isBreathing = true;
        powerBar.fillAmount = 0f;
    }

    void OnBreathEnded(object sender, ExhalationCompleteEventArgs e)
    {
        isBreathing = false;
        breathCount++;

        powerBar.fillAmount = e.BreathQuality / 4f;
        /*
        if (e.BreathQuality >= 4)
            FizzyoFramework.Instance.Achievements.UnlockAchievement(PerfectBreathUID);*/
    }

    void Update()
    {
        if (isBreathing)
        {
            powerBar.fillAmount += FizzyoFramework.Instance.Device.Pressure() 
                / FizzyoFramework.Instance.Recogniser.MaxBreathLength
                * Time.deltaTime;
        }

        if (Input.GetButtonDown("Fire1") && powerBar.fillAmount >= 1f && !hook.clawScript.isFired)
        {
            hook.LaunchClaw();
            powerBar.fillAmount = 0f;  // power used, can't fire until recharged
        }
	}
}
