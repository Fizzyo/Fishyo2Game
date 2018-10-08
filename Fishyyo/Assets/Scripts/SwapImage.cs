using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SwapImage : MonoBehaviour
{
    public Texture texture1;
    public Texture texture2;
    public RawImage img;

    public void Swap()
    {
        img.texture = texture2;
    }

    public void UnSwap()
    {
        img.texture = texture1;
    }
}