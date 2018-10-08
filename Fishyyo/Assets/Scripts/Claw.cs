using UnityEngine;
using System.Collections;
using Fizzyo;

public class Claw : MonoBehaviour {

    /*
	This script is for generating the claw from the cube at the top that is used to catch the fish
	Also, the collections system is implemented at the bottom , where different fish have different tags
	this script integrates with the Hook script as they are all part of the fisher
	*/

    public bool retracting = false;
    public bool isFired = false;
    public float speed = 4f;

    public Transform origin;	// where the hook will start
	public Hook hook;
	public ScoreManager scoreManager;

    private int fishValue = 100;
    private bool hitFish;

    private Vector3 target;
	private GameObject childObject;		// used to destroy the fish
	private LineRenderer lineRenderer;	// used to draw the fishing rope
	private Collider collider;

	void Awake()
	{
		lineRenderer = GetComponent<LineRenderer>();
		collider = GetComponent<Collider>();
	}

	void Update()
    {
		transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);	//the position of the claw
		lineRenderer.SetPosition(0, origin.position);		//draw the line renderer from origin
		lineRenderer.SetPosition(1, transform.position);	//to the position of the claw

		if (!retracting) collider.enabled = true;

        // Deliberate assignment
        if (transform.position == origin.position && retracting)
		{
			hook.CollectedObject();
			if (hitFish)
			{
				scoreManager.AddPoints(fishValue);
				hitFish = false;
			}
			Destroy(childObject);
			gameObject.SetActive(false);
			retracting = false;
            isFired = false;
		}
	}

	public void ClawTarget(Vector3 pos)
	{
		target = pos;
	}

	void OnTriggerEnter(Collider other)
	{
		retracting = true;
		target = origin.position;
        fishValue = other.gameObject.GetComponent<FishController>().points;

        if (other.gameObject.CompareTag("Siganus"))
		{
			hitFish = true;
			childObject = other.gameObject;
			other.transform.SetParent(this.transform);
			collider.enabled = false;
            if (CollectionManager.Instance != null)
            {
                CollectionManager.Instance.Unlock(0);
            }
		}

        if (other.gameObject.CompareTag("Mandarin"))
        {
			hitFish = true;
			childObject = other.gameObject;
			other.transform.SetParent(this.transform);
			collider.enabled = false;
            if (CollectionManager.Instance != null)
            {
                CollectionManager.Instance.Unlock(1);
            }
        }

        if (other.gameObject.CompareTag("Yellowtang"))
        {
			hitFish = true;
			childObject = other.gameObject;
			other.transform.SetParent(transform);
			collider.enabled = false;
            if (CollectionManager.Instance != null)
            {
                CollectionManager.Instance.Unlock(2);
            }
        }
        
        if (other.gameObject.CompareTag("Powderbluetang"))
        {
			hitFish = true;
			childObject = other.gameObject;
			other.transform.SetParent(this.transform);
			collider.enabled = false;
            if (CollectionManager.Instance != null)
            {
                CollectionManager.Instance.Unlock(3);
            }
        }

        if (other.gameObject.CompareTag("Crab"))
        {
			hitFish = true;
			childObject = other.gameObject;
			other.transform.SetParent(this.transform);
			collider.enabled = false;
            if (CollectionManager.Instance != null)
            {
                CollectionManager.Instance.Unlock(4);
            }
        }

        if (other.gameObject.CompareTag("Koi"))
        {
			hitFish = true;
			childObject = other.gameObject;
			other.transform.SetParent(this.transform);
			collider.enabled = false;
            if (CollectionManager.Instance != null)
            {
                CollectionManager.Instance.Unlock(5);
            }
        }
    }
}




