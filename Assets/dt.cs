using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dt : MonoBehaviour
{
    // ステージコントロール
    public static int Stage;                    // ステージナンバー
    public static bool isClear;                 // クリアフラグ
    public static int clearStatus;              // クリアステータス（1:せんせいクリア 2:全消しクリア）
    public static bool isMojiDestroy;           // 残り浮遊文字消去フラグ
    public static int remainBlock;              // 残りブロック数
    public static int getMojiNum;               // ゲットした文字番号

    // スコア関連
    public static int Score;
    public static int HighScore;
    public static string SAVE_KEY = "HighScore";    // ハイスコア保存キー

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

    // ステージ毎の文字落下スピード
    public static readonly float[] MojiSpeed =
    {
        -2.5f, -3.0f, -3.5f, -5.0f, -5.5f, -6.0f, -7.5f, -8.0f, -8.5f
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
