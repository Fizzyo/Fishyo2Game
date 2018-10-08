using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class VolumeSetting : MonoBehaviour {

    public SwapImage instance;
    public AudioMixer audioMixer;
    public AudioSource source;

	public void SetVolume(float volume)
    {
        source.volume = volume;
        print("seting to: " + volume);
        audioMixer.SetFloat("Volume", volume);

        if (volume == -60)
            instance.Swap();
        else
            instance.UnSwap();
    }
}
