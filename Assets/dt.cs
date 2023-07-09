using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dt : MonoBehaviour
{
    public static readonly string[] sLavel =
    {
        "00", "01", "02", "03",
        "10", "11", "12", "13", "14",
        "20", "21", "22", "23",
        "30", "31", "32", "33", "34",
        "40", "41", "42", "43",
        "50", "51", "52", "53", "54"
    };


    public static readonly float[] x =
    {
        -2, -1, 1, 2,
        -2, -1, 0, 1, 2,
        -2, -1, 1, 2,
        -2, -1, 0, 1, 2,
        -2, -1, 1, 2,
        -2, -1, 0, 1, 2
    };

    public static readonly float[] y =
    {
        7, 7, 7, 7,
        6, 6, 6, 6, 6,
        5, 5, 6, 5,
        4, 4, 4, 4, 4,
        7, 7, 7, 7,
        6, 6, 6, 6, 6
    };
}
