using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class mojiCtrl : MonoBehaviour
{
    // 変数もろもろ
    public int num;                                 // 文字番号

    // ゲームオブジェクト
    GameObject[] TextMoji = new GameObject[6];      // 文字

    // リジッドボディコンポーネント
    Rigidbody Rigid;

    // Start is called before the first frame update
    void Start()
    {
        // ゲームオブジェクトの取得
        TextMoji[0] = GameObject.Find("textSen");
        TextMoji[1] = GameObject.Find("textSei");

        // リジッドボディコンポーネントの取得
        Rigid = GetComponent<Rigidbody>();

        // 下に落ちる
        Rigid.velocity = new Vector3(0.0f, -2.5f, 0.0f);
    }

    // 他のオブジェクトと接触
    void OnTriggerEnter(Collider other)
    {
        // 接触したのがパドルだったら
        if (other.CompareTag("Paddle"))
        {
            // デバッグ用
            // Debug.Log(other.CompareTag("Paddle") + "," + num);

            // 正解文字だったら
            if (num == dt.getMoji)
            {
                // 正解文字色を明るくする
                TextMoji[num].GetComponent<Text>().color = Color.yellow;

                // 正解文字数を加算
                dt.getMoji++;

                // クリア文字数に達したら
                if(dt.getMoji == GameDirector.clear)
                {
                    // クリアフラグをtrueに
                    GameDirector.isClear = true;
                }
            }
            // 正解じゃなかったら最初から
            else
            {
                // ゲットした文字をゼロに
                dt.getMoji = 0;

                // 文字色を暗くする
                for (int i = 0; i < GameDirector.clear; i++)
                {
                    TextMoji[num].GetComponent<Text>().color = new Color(0.31f, 0.31f, 0.0f, 1.0f); ;
                }
            }
            // 消える
            Destroy(gameObject);
        }
        // 接触したのが底だったら消える
        else if(other.CompareTag("Bottom"))
        {
            Destroy(gameObject);
        }
    }
}
