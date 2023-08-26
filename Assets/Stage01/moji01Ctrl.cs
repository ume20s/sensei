using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class moji01Ctrl : MonoBehaviour
{
    // 変数もろもろ
    public int num;                                 // 自分の文字番号（生成時に設定される）

    // ゲームオブジェクト
    GameObject[] TextMoji = new GameObject[2];      // 正解インジケーター文字

    // リジッドボディコンポーネント
    Rigidbody Rigid;

    // スプライトレンダラ
    SpriteRenderer spriteRenderer;

    // 音声関連
    AudioSource audioSource;
    public AudioClip seKirarin;
    public AudioClip seHenyo;

    // Start is called before the first frame update
    void Start()
    {
        // ゲームオブジェクトの取得
        TextMoji[0] = GameObject.Find("textSen");
        TextMoji[1] = GameObject.Find("textSei");

        // リジッドボディコンポーネントの取得
        Rigid = GetComponent<Rigidbody>();

        // スプライトレンダラコンポーネントの取得
        spriteRenderer = GetComponent<SpriteRenderer>();

        // 音声コンポーネントの取得
        audioSource = GetComponent<AudioSource>();

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
            if (num == Stage01Director.seikai[Stage01Director.getMojiNum])
            {
                // 正解文字色を明るくする
                TextMoji[num].GetComponent<Text>().color = Color.yellow;

                // 正解文字数を加算
                Stage01Director.getMojiNum++;

                // 正解効果音
                audioSource.PlayOneShot(seKirarin);

                // クリア文字数に達したら
                if (Stage01Director.getMojiNum == Stage01Director.clear)
                {
                    // ステータスは先生クリア
                    Stage01Director.ClearStatus = 1;

                    // クリアフラグをtrueに
                    Stage01Director.isClear = true;
                }
            }
            // 正解じゃなかったら最初から
            else
            {
                // 不正解効果音
                audioSource.PlayOneShot(seHenyo);

                // ゲットした文字番号をゼロに
                Stage01Director.getMojiNum = 0;

                // 文字色を暗くする
                for (int i = 0; i < Stage01Director.clear; i++)
                {
                    TextMoji[num].GetComponent<Text>().color = new Color(0.31f, 0.31f, 0.0f, 1.0f); ;
                }
            }
            // 非表示（効果音を出すためにDestroyやSetActive(false)で消さない）
            spriteRenderer.enabled = false;
        }
        // 接触したのが壁だったら消える
        else if(other.CompareTag("Wall"))
        {
            Destroy(gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        // ステージクリアだったら
        if (Stage01Director.isMojiDestroy)
        {
            // 文字消去
            Destroy(gameObject);
        }
    }
}
