using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;

public class block08Ctrl : MonoBehaviour
{
    // ゲームオブジェクト
    public GameObject mojiPrefab;   // 文字Prefab
    GameObject moji;                // 生成する文字オブジェクト
    GameObject textScore;           // スコア
    GameObject textHighScore;       // ハイスコア

    // 文字prefabのスプライトレンダラーコンポーネント
    SpriteRenderer spriteRenderer;

    // 文字スプライト
    public Sprite[] mojiSprite = new Sprite[9];

    // マルチボールスプライト
    public Sprite mojiMultiBallSprite;

    // Start is called before the first frame update
    void Start()
    {
        // ゲームオブジェクトの取得
        textScore = GameObject.Find("textScore");
        textHighScore = GameObject.Find("textHighScore");

        // レイヤを手前に持ってくる
        GetComponent<SortingGroup>().sortingOrder = 2;
    }

    // ボールがぶつかったら
    void OnCollisionEnter(Collision collision)
    {
        // スコア加算
        dt.Score += dt.Point[dt.Stage];
        textScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
        checkHighScore();

        // ブロック削除
        gameObject.SetActive(false);
        dt.remainBlock--;

        // 残りブロックが（必要文字数－ゲットしている文字数）より小さかったらゲームオーバー
        if (dt.remainBlock < dt.clearMojiNum[dt.Stage] - dt.getMojiNum)
        {
            // ステータスは全消しクリア
            dt.clearStatus = 2;

            // クリアフラグをtrueに
            dt.isClear = true;
        }

        // ステージ設定毎の確率で文字が発生
        if (Random.Range(0, 100) < dt.mojiProbabirity[dt.Stage])
        {
            // 生成する文字番号
            int num;

            // 1/10でマルチボール
            if((Random.Range(0, 10) == 0) && (dt.isMultiBalled == false)) {
                num = -1;
                dt.isMultiBalled = true;
            } else {
                // 半分の確率でお邪魔文字を含めたランダム文字
                if(Random.Range(0, 2) == 0) {
                    num = Random.Range(0, dt.mojiSyurui[dt.Stage]);
                } else {     // 半分の確率で正解文字セットの中からランダム文字
                    num = Random.Range(0, dt.mojiSyurui[dt.Stage-3]);
                }
            }

            // 文字を生成
            moji = Instantiate(mojiPrefab, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y - 1.0f, 0.0f), Quaternion.identity);

            // 文字番号から文字をセット
            spriteRenderer = moji.GetComponent<SpriteRenderer>();
            if(num == -1) {
                spriteRenderer.sprite = mojiMultiBallSprite;
            } else {
                spriteRenderer.sprite = mojiSprite[num];
                // 1/10の確率でデカ文字
                if(Random.Range(0, 10) == 0){
                    moji.transform.localScale = new Vector3(3, 3, 1);
                }

            }

            // デバッグ用
            // Debug.Log("num = " + num);
            // Debug.Log("moji= " + spriteRenderer);

            // オブジェクトで文字番号を保持する
            moji.GetComponent<moji08Ctrl>().num = num;
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
}
