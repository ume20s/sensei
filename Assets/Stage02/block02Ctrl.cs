using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;

public class block02Ctrl : MonoBehaviour
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

        // ブロックが全部消えたらクリア
        if(dt.remainBlock == 0)
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
            int num = Random.Range(0, dt.mojiSyurui[dt.Stage]);

            // 文字を生成
            moji = Instantiate(mojiPrefab, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y - 1.0f, 0.0f), Quaternion.identity);

            // 文字番号から文字をセット
            spriteRenderer = moji.GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = mojiSprite[num];

            // デバッグ用
            // Debug.Log("num = " + num);
            // Debug.Log("moji= " + spriteRenderer);

            // オブジェクトで文字番号を保持する
            moji.GetComponent<moji02Ctrl>().num = num;
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
