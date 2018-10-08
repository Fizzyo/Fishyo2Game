using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FishyoSession : MonoBehaviour {

    private static FishyoSession instance;

    public int sets = 10;
    public int breaths = 10;
    public int completeSets = 0;

    public static FishyoSession Instance
    {
        get
        {
            if (instance != null)
                return instance;

            GameObject singleton = new GameObject();
            instance = singleton.AddComponent<FishyoSession>();
            DontDestroyOnLoad(singleton);

            singleton.name = "Session Tracker";

            return instance;
        }
    }
}
