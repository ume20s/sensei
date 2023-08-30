using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dt : MonoBehaviour
{
    // ステージコントロール
    public static int Stage;

    // 次のステージ名
    public static readonly string[] NextStage =
    {
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear"
    };

    // ステージ毎のブロックポイント
    public static readonly int[] Point =
    {
        10, 20, 30, 40, 50, 60, 70, 80, 90
    };

    // ステージ毎のブロックポイント
    public static readonly float[] MojiSpeed =
    {
        -2.5f, -2.5f, -2.5f, -2.5f, -2.5f, -2.5f, -2.5f, -2.5f, -2.5f
    };


    // スコア関連
    public static int Score;
    public static int HighScore;
    public static string SAVE_KEY = "HighScore";    // ハイスコア保存キー

    // ブロック名
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

    // ブロック位置座標
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
}
