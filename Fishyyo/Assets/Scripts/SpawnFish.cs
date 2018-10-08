using UnityEngine;
using System.Collections;

public class SpawnFish : MonoBehaviour {
	
    /*
    this script is for spawning fish (that were specified in the Scoremanager) at random x and y values (in certain ranges)
    this adds some randomness to the game
    */ 

	public int xRange = 10;  // screen range
	public int yRange = 3;
    public float[] spawnRates;

	public GameObject[] fishList;
    public Transform boatPosition;

    private float[] lastSpawnTime;

    private Quaternion fishRotation = new Quaternion(0, -90, 0, 90);

    void Start() 
	{
        lastSpawnTime = new float[spawnRates.Length];
        Boat.SELECTED_BOAT.GetComponent<Animator>().enabled = true;
        Boat.SELECTED_BOAT.transform.position = boatPosition.position;
        Boat.SELECTED_BOAT.transform.rotation = Quaternion.identity;
        Boat.SELECTED_BOAT.transform.localScale = Vector3.one * 0.001f;
        Boat.SELECTED_BOAT.GetComponent<Animator>().SetTrigger("Bob");
	}

    void Update()
    {
        Spawn();
    }

 	void Spawn()
	{
        // Spawn random fish from list
		/*for (int i = 0; i <= VerifyNumBreaths.selectedBreaths; i++)
		{
			Vector3 spawnLoc = 
                new Vector3(Random.Range (-xRange, xRange), 
                Random.Range (-yRange, yRange), 
                0f);
			int objectPick = Random.Range(0, fishList.Length);  
			Instantiate(fishList[objectPick], spawnLoc, fishRotation); 
		}
        */
        for (int i = 0; i < fishList.Length; i++)
        {
            //float spawnAmount = spawnProbability[i] * VerifyNumBreaths.selectedBreaths;
            if (Time.time - lastSpawnTime[i] >= spawnRates[i])
            {
                Vector3 spawnLoc =
                    new Vector3(-xRange,
                    Random.Range(-yRange, yRange),
                    0f);
                GameObject fish = Instantiate(fishList[i], spawnLoc, fishRotation);
                FishController fc = fish.GetComponent<FishController>();
                fc.speed = fc.speed + 0.2f * FishyoSession.Instance.completeSets;
                lastSpawnTime[i] = Time.time;
            }
        }
	}
}