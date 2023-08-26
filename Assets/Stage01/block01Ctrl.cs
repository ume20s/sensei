using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class block01Ctrl : MonoBehaviour
{
    // ゲームオブジェクト
    public GameObject mojiPrefab;   // 文字Prefab
    GameObject moji;                // 生成する文字オブジェクト
    GameObject TextScore;           // スコア
    GameObject TextHighScore;       // ハイスコア

    // 文字prefabのスプライトレンダラーコンポーネント
    SpriteRenderer spriteRenderer;

    // 文字スプライト
    public Sprite[] mojiSprite = new Sprite[2];

    // Start is called before the first frame update
    void Start()
    {
        // ゲームオブジェクトの取得
        TextScore = GameObject.Find("textScore");
        TextHighScore = GameObject.Find("textHighScore");
    }

    // ボールがぶつかったら
    void OnCollisionEnter(Collision collision)
    {
        // スコア加算
        dt.Score += Stage01Director.point;
        TextScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
        checkHighScore();

        // ブロック削除
        gameObject.SetActive(false);
        Stage01Director.remainBlock--;

        // ブロックが全部消えたらクリア
        if(Stage01Director.remainBlock == 0)
        {
            // ステータスは全消しクリア
            Stage01Director.ClearStatus = 2;

            // クリアフラグをtrueに
            Stage01Director.isClear = true;
        }

        // 1/2の確率で文字を生成
        if (Random.Range(0, 2) == 0)
        {
            // 生成する文字番号
            int num = Random.Range(0, 2);
            // デバッグ用
            // Debug.Log("num= " + num);

            // 文字を生成
            moji = Instantiate(mojiPrefab, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y - 1.0f, 0.0f), Quaternion.identity);

            // 文字番号から文字をセット
            spriteRenderer = moji.GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = mojiSprite[num];

            // デバッグ用
            Debug.Log("num = " + num);
            Debug.Log("moji= " + spriteRenderer);

            // オブジェクトで文字番号を保持する
            moji.GetComponent<moji01Ctrl>().num = num;
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
            TextHighScore.GetComponent<Text>().text = "HighScore:" + dt.HighScore.ToString("D5");

            // ハイスコア保存
            PlayerPrefs.SetInt(dt.SAVE_KEY, dt.HighScore);
            PlayerPrefs.Save();
        }
    }
}
