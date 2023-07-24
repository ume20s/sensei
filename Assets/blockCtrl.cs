using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class blockCtrl : MonoBehaviour
{
    // ゲームオブジェクト
    public GameObject mojiPrefab;   // 文字Prefab
    GameObject moji;                // 生成する文字オブジェクト
    GameObject TextScore;           // スコア

    // 文字prefabのスプライトレンダラーコンポーネント
    SpriteRenderer spriteRenderer;

    // 文字スプライト
    public Sprite[] mojiSprite = new Sprite[2];

    // Start is called before the first frame update
    void Start()
    {
        // ゲームオブジェクトの取得
        TextScore = GameObject.Find("textScore");
    }

    // ボールがぶつかったら
    void OnCollisionEnter(Collision collision)
    {
        // ブロック削除
        gameObject.SetActive(false);

        // スコア加算
        dt.score += 10;
        TextScore.GetComponent<Text>().text = "Score:" + dt.score.ToString("D4");

        // 1/2の確率で文字を生成
        if(Random.Range(0, 2) == 0)
        {
            // 生成する文字番号
            int num = Random.Range(0, 2);
            
            // 文字を生成
            moji = Instantiate(mojiPrefab, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y - 1.0f, 0.0f), Quaternion.identity);

            // 文字番号から文字をセット

            spriteRenderer = moji.GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = mojiSprite[num];

            mojiCtrl hoge = moji.GetComponent<mojiCtrl>();
            hoge.num = num;
        }
    }
}
