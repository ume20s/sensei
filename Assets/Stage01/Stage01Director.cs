using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stage01Director : MonoBehaviour
{
    // 音声関連
    AudioSource audioSource;
    public AudioClip vGameStart;
    public AudioClip vStageClear;
    public AudioClip sePi;
    public AudioClip seKirarin;

    // ゲームオブジェクト
    public GameObject blockPrefab;
    GameObject[] block = new GameObject[49];            // ブロック
    GameObject textScore;                               // スコア文字列
    GameObject textHighScore;                           // ハイスコア文字列
    GameObject[] textMoji = new GameObject[2];          // 正解インジケーター文字
    GameObject textSenseiClear;                         // 先生クリア表示
    GameObject textAllClear;                            // 全消しクリア表示
    GameObject TapToNext;                               // タップして次のステージ
    GameObject Ball;                                    // ボール
    GameObject Paddle;                                  // パドル

    // ブロックprefabのスプライトレンダラーコンポーネント
    SpriteRenderer spriteRenderer;

    // ブロックスプライト
    public Sprite[] blockSprite = new Sprite[49];

    // Start is called before the first frame update
    void Start()
    {
        // もろもろの変数の初期化
        dt.Stage = 0;
        dt.isClear = false;
        dt.clearStatus = -1;
        dt.isMojiDestroy = false;
        dt.getMojiNum = 0;

        // ゲームオブジェクトの取得
        textScore = GameObject.Find("textScore");
        textHighScore = GameObject.Find("textHighScore");
        textMoji[0] = GameObject.Find("textSen");
        textMoji[1] = GameObject.Find("textSei");
        textSenseiClear = GameObject.Find("textSenseiClear");
        textAllClear = GameObject.Find("textAllClear");
        TapToNext = GameObject.Find("TapToNext");
        Ball = GameObject.Find("ball");
        Paddle = GameObject.Find("paddle");

        // 音声コンポーネントの取得
        audioSource = GetComponent<AudioSource>();

        // クリア表示を消しておく
        textSenseiClear.SetActive(false);
        textAllClear.SetActive(false);
        TapToNext.SetActive(false);

        // スコア初期化
        dt.Score = 0;
        textScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
        textHighScore.GetComponent<Text>().text = "HighScore:" + dt.HighScore.ToString("D5");

        // ブロックを配置
        dt.remainBlock = 49;
        for (int i = 0; i<49; i++)
        {
            block[i] = Instantiate(blockPrefab, new Vector3(dt.x[i], dt.y[i], 0.0f), Quaternion.identity);
            spriteRenderer = block[i].GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = blockSprite[i];
        }

        // ゲーム開始音声
        StartCoroutine("GameStart");
    }

    // Update is called once per frame
    void Update()
    {
        // クリアしていたら
        if (dt.isClear)
        {
            // クリアフラグfalse（多重突入を防止する）
            dt.isClear = false;

            // 浮遊している文字を消去
            dt.isMojiDestroy = true;

            // 最後の文字をゲットした効果音
            audioSource.PlayOneShot(seKirarin);

            // ボールとパドルを消去
            Ball.SetActive(false);
            Paddle.SetActive(false);

            // 先生インジケータを消去
            textMoji[0].SetActive(false);
            textMoji[1].SetActive(false);

            // クリアステータスによりエンディングエフェクトを変える
            switch (dt.clearStatus)
            {
                case 0:
                    break;
                    // NOTREACHED
                
                // 先生エンディング
                case 1:
                    StartCoroutine("SenseiEnding");
                    break;

                // 全消しエンディング
                case 2:
                    // 全消しエンディング表示
                    textAllClear.SetActive(true);

                    // ステージクリア音声
                    audioSource.PlayOneShot(vStageClear);

                    // タップして次のステージへ
                    TapToNext.SetActive(true);
                    break;

                default:
                    break;
                    // NOTREACHED
            }
        }
    }

    // ハイスコアチェック
    private void checkHighScore()
    {
        // 現スコアがハイスコアを上回ったら
        if (dt.Score > dt.HighScore)
        {
            // ハイスコア更新
            dt.HighScore = dt.Score;
            textHighScore.GetComponent<Text>().text = "HighScore:" + dt.HighScore.ToString("D5");

            // ハイスコア保存
            PlayerPrefs.SetInt(dt.SAVE_KEY, dt.HighScore);
            PlayerPrefs.Save();
        }
    }

    // ゲームスタート音声
    IEnumerator GameStart()
    {
        yield return new WaitForSeconds(0.01f);
        audioSource.PlayOneShot(vGameStart);
    }

    // 先生エンディング
    IEnumerator SenseiEnding()
    {
        // 先生エンディング表示
        textSenseiClear.SetActive(true);

        // ステージクリア音声
        audioSource.PlayOneShot(vStageClear);
        yield return new WaitForSeconds(2.0f);

        // 残りブロックを得点に
        for (int i = 48; i >= 0; i--)
        {
            // ブロックがアクティブだったら
            if (block[i].activeSelf)
            {
                // 効果音
                audioSource.PlayOneShot(sePi);

                // ２倍の得点をスコアに付加
                dt.Score += dt.Point[dt.Stage] * 2;
                textScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
                checkHighScore();

                // ブロック消去
                block[i].SetActive(false);
                yield return new WaitForSeconds(0.05f);
            }
        }
        // タップして次のステージへ
        TapToNext.SetActive(true);
    }
}
