using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fizzyo;

public class FishController : MonoBehaviour {

	/*
	This script is for moving the fish on the x-axis
	and for the screen wrap functionality where the fish appear on the left end once they reach the right end
	*/

	public int yRange = 3;
    public float speed = 1.4f;
    public int points = 100;

    private bool free = true;  // Has this fish not been caught?

    void Update()
    {
        // Relocate fish when they go off screen
        if (transform.position.x > 11f)
        {
            /*Vector3 spawnLoc = new Vector3(-12f, transform.position.y, 0f);
            transform.SetPositionAndRotation(spawnLoc, transform.rotation);*/
            Destroy(gameObject);
        }

		if (free)
			transform.Translate (0, 0, -speed * Time.deltaTime);
	}

	void OnTriggerEnter(Collider col)
	{
		free = false;
	}
}
