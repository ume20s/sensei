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
        "stage02",
        "stage03",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear"
    };

    // ステージ毎のクリアに必要な文字数
    public static readonly int[] clearMojiNum =
    {
        2, 4, 6, 2, 4, 6, 2, 4, 6
    };

    // ステージ毎のクリア文字列
    public static readonly int[,] seikaiMoji =
    {
        { 0, 1, 0, 0, 0, 0 },   // 先生
        { 0, 1, 0, 2, 0, 0 },   // せんせい
        { 0, 1, 2, 0, 1, 3 },   // SENSEI
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 2, 0, 0 },
        { 0, 1, 2, 0, 1, 3 },
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 2, 0, 0 },
        { 0, 1, 2, 0, 1, 3 }
    };

    // ステージ毎の文字発生確率
    public static readonly int[] mojiProbabirity =
    {
        50, 60, 70, 70, 80, 90, 80, 90, 100
    };

    // ステージ毎の発生する文字種数
    public static readonly int[] mojiSyurui =
    {
        2, 3, 4, 4, 6, 8, 6, 9, 12
    };

    // ステージ毎のブロックポイント
    public static readonly int[] Point =
    {
        10, 15, 20, 25, 30, 35, 40, 45, 50
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
        7.12f, 7.12f, 7.12f, 7.12f, 7.12f,
        6.24f, 6.24f, 6.24f, 6.24f,
        5.36f, 5.36f, 5.36f, 5.36f, 5.36f,
        4.48f, 4.48f, 4.48f, 4.48f,
        3.60f, 3.60f, 3.60f, 3.60f, 3.60f,
        2.72f, 2.72f, 2.72f, 2.72f,
        1.84f, 1.84f, 1.84f, 1.84f, 1.84f,
        0.96f, 0.96f, 0.96f, 0.96f,
        0.08f, 0.08f, 0.08f, 0.08f, 0.08f,
        -0.8f, -0.8f, -0.8f, -0.8f
    };
}
