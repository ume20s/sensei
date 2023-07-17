using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class blockCtrl : MonoBehaviour
{
    // スコアのゲームオブジェクト
    GameObject TextScore;

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
    }
}
