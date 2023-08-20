using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stage01Director : MonoBehaviour
{
    // 変数もろもろ（ステージ依存）
    public const int clear = 2;             // クリア文字数
    public const int point = 10;            // ブロック１個の得点
    public static int[] seikai = { 0, 1 };  // 正解文字番号（0:先 1:生）

    // 変数もろもろ（ステージ共通）
    public static int remainBlock;          // 残りブロック数
    public static int getMojiNum;           // ゲットした文字番号
    public static bool isClear = false;     // ゲームクリアフラグ
    public static int ClearStatus;          // クリアステータス（1:せんせいクリア 2:全消しクリア）


    // ゲームオブジェクト
    public GameObject blockPrefab;
    GameObject[] block = new GameObject[50];            // ブロック
    GameObject TextScore;                               // スコア文字列
    GameObject TextHighScore;                           // ハイスコア文字列
    GameObject TextSen;                                 // 先
    GameObject TextSei;                                 // 生
    GameObject TextSenseiClear;                         // 先生クリア表示
    GameObject TextAllClear;                            // 全消しクリア表示
    GameObject Ball;                                    // ボール
    GameObject Paddle;                                  // パドル

    // ブロックprefabのスプライトレンダラーコンポーネント
    SpriteRenderer spriteRenderer;

    // せんせいスプライト
    public Sprite[] senseiSprite = new Sprite[50];

    // Start is called before the first frame update
    void Start()
    {
        // ゲームオブジェクトの取得
        TextScore = GameObject.Find("textScore");
        TextHighScore = GameObject.Find("textHighScore");
        TextSen = GameObject.Find("textSen");
        TextSei = GameObject.Find("textSei");
        TextSenseiClear = GameObject.Find("textSenseiClear");
        TextAllClear = GameObject.Find("textAllClear");
        Ball = GameObject.Find("ball");
        Paddle = GameObject.Find("paddle");

        // クリア表示を消しておく
        TextSenseiClear.SetActive(false);
        TextAllClear.SetActive(false);

        // スコア初期化
        dt.score = 0;
        TextScore.GetComponent<Text>().text = "Score:" + dt.score.ToString("D4");

        // ブロックを配置
        remainBlock = 49;
        for (int i = 0; i<49; i++)
        {
            block[i] = Instantiate(blockPrefab, new Vector3(dt.x[i], dt.y[i], 0.0f), Quaternion.identity);
            spriteRenderer = block[i].GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = senseiSprite[i];
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (isClear)
        {
            // ボールとパドルを消去
            Ball.SetActive(false);
            Paddle.SetActive(false);

            // 先生インジケータを消去
            TextSen.SetActive(false);
            TextSei.SetActive(false);

            switch (ClearStatus)
            {
                case 0:
                    break;
                
                case 1:
                    TextSenseiClear.SetActive(true);
                    break;

                case 2:
                    TextAllClear.SetActive(true);
                    break;

                default:
                    break;
            }
        }
    }
}
