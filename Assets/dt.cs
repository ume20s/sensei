using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dt : MonoBehaviour
{
    // �X�R�A�֘A
    public static int score;

    // �u���b�N��
    public static readonly string[] sLabel =
    {
        "00", "01", "02", "03",
        "10", "11", "12", "13", "14",
        "20", "21", "22", "23",
        "30", "31", "32", "33", "34",
        "40", "41", "42", "43",
        "50", "51", "52", "53", "54",
        "60", "61", "62", "63",
        "70", "71", "72", "73", "74",
        "80", "81", "82", "83",
        "90", "91", "92", "93", "94",
        "a0", "a1", "a2", "a3"
    };

    // �u���b�N�ʒu���W
    public static readonly float[] x =
    {
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f
    };
    public static readonly float[] y =
    {
        8.00f, 8.00f, 8.00f, 8.00f,
        7.14f, 7.14f, 7.14f, 7.14f, 7.14f,
        6.28f, 6.28f, 6.28f, 6.28f,
        5.42f, 5.42f, 5.42f, 5.42f, 5.42f,
        4.56f, 4.56f, 4.56f, 4.56f,
        3.70f, 3.70f, 3.70f, 3.70f, 3.70f,
        2.84f, 2.84f, 2.84f, 2.84f,
        1.98f, 1.98f, 1.98f, 1.98f, 1.98f,
        1.12f, 1.12f, 1.12f, 1.12f,
        0.26f, 0.26f, 0.26f, 0.26f, 0.26f,
        -0.6f, -0.6f, -0.6f, -0.6f
    };

    // �~���Ă��镶��
    public static readonly string[,] moji =
    {
        { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" },
        { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" },
        { "�r", "�d", "�m", "�r", "�d", "�h", "�r", "�d", "�m", "�r", "�d", "�h", "�r", "�d" },
        { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" },
        { "��", "��", "��", "��", "��", "��", "��", "�V", "��", "��", "��", "��", "��", "��" },
        { "�r", "�d", "�m", "�r", "�d", "�h", "�T", "�R", "�W", "�l", "�e", "��", "�P", "�k" },
        { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" },
        { "��", "��", "��", "��", "��", "��", "��", "�V", "��", "��", "��", "��", "��", "��" },
        { "�r", "�d", "�m", "�r", "�d", "�h", "�T", "�R", "�W", "�l", "�e", "��", "�P", "�k" }
    };
}
