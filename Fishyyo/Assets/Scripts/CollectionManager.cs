using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectionManager : MonoBehaviour {

    public static CollectionManager Instance;

    private bool[] fishUnlocked = new bool[6];
    
    void Start()
    {
        for (int i = 0; i < fishUnlocked.Length; i++)
        {
            fishUnlocked[i] = false;
        }
    }

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;

        DontDestroyOnLoad(gameObject);
    }

    public void Unlock(int index)
    {
        fishUnlocked[index] = true;
    }

    public bool Check(int index)
    {
        return fishUnlocked[index];
    }

}
