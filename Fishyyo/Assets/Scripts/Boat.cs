using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boat : MonoBehaviour
{
    public static GameObject SELECTED_BOAT;

    public GameObject[] boats;

    private int index = 0;

    private GameObject[] instances;

    private void Start()
    {
        instances = new GameObject[boats.Length];

        for (int i = 0; i < boats.Length; i++)
        {
            instances[i] = Instantiate(boats[i]);
            instances[i].transform.position = -Vector3.down;
            instances[i].SetActive(false);
            DontDestroyOnLoad(instances[i]);
        }

        instances[0].SetActive(true);
        SELECTED_BOAT = instances[0];
    }

    public void IncreaseBoat()
    {
        index++;
        ChangeBoat();
    }

    public void DecreaseBoat()
    {
        index--;
        ChangeBoat();
    }

    private void ChangeBoat()
    {
        index = Mathf.Clamp(index, 0, instances.Length - 1);

        for (int i = 0; i < instances.Length; i++)
        {
            if (i == index)
            {
                instances[i].SetActive(true);
                SELECTED_BOAT = instances[i];
            }
            else
            {
                instances[i].SetActive(false);
            }
        }
    }
}
