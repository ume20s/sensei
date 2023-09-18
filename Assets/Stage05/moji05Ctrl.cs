using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;

public class moji05Ctrl : MonoBehaviour
{
    // 変数もろもろ
    public int num;                                 // 自分の文字番号（生成時に設定される）
    public GameObject exBallPrefab;                 // マルチボール用Prefab

    // ゲームオブジェクト
    GameObject[] textMoji = new GameObject[4];      // 正解インジケーター文字
    GameObject[] exBall = new GameObject[5];        // マルチボール

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
        textMoji[0] = GameObject.Find("textSe1");
        textMoji[1] = GameObject.Find("textNn");
        textMoji[2] = GameObject.Find("textSe2");
        textMoji[3] = GameObject.Find("textIi");

        // リジッドボディコンポーネントの取得
        Rigid = GetComponent<Rigidbody>();

        // スプライトレンダラコンポーネントの取得
        spriteRenderer = GetComponent<SpriteRenderer>();

        // 音声コンポーネントの取得
        audioSource = GetComponent<AudioSource>();

        // レイヤを手前に持ってくる
        GetComponent<SortingGroup>().sortingOrder = 3;

        // 下に落ちる
        Rigid.velocity = new Vector3(0.0f, dt.MojiSpeed[dt.Stage], 0.0f);
    }

    // 他のオブジェクトと接触
    void OnTriggerEnter(Collider other)
    {
        // 接触したのがパドルだったら
        if (other.CompareTag("Paddle"))
        {
            // マルチボールだったら
            if(num == -1) {
                for(int i=0; i<3; i++) {
                    exBall[i] = Instantiate(exBallPrefab, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, 0.0f), Quaternion.identity);
                    Rigidbody exBallRigid = exBall[i].GetComponent<Rigidbody>();
                    exBallRigid.velocity = new Vector3(dt.fx[i], dt.fy[i], 0.0f);
                }
            } else {
                // 正解文字だったら
                if (num == dt.seikaiMoji[dt.Stage, dt.getMojiNum])
                {
                    // 正解文字色を明るくする
                    textMoji[dt.getMojiNum].GetComponent<Text>().color = Color.yellow;

                    // 正解文字数を加算
                    dt.getMojiNum++;

                    // 正解効果音
                    audioSource.PlayOneShot(seKirarin);

                    // クリア文字数に達したら
                    if (dt.getMojiNum == dt.clearMojiNum[dt.Stage])
                    {
                        // ステータスは先生クリア
                        dt.clearStatus = 1;

                        // クリアフラグをtrueに
                        dt.isClear = true;
                    }
                }
                // 正解じゃなかったら最初から
                else
                {
                    // 不正解効果音
                    audioSource.PlayOneShot(seHenyo);

                    // ゲットした文字番号をゼロに
                    dt.getMojiNum = 0;

                    // 文字色を暗くする
                    for (int i = 0; i < dt.clearMojiNum[dt.Stage]; i++)
                    {
                        textMoji[i].GetComponent<Text>().color = new Color(0.31f, 0.31f, 0.0f, 1.0f); ;
                    }

                    // 残りブロックが（必要文字数－ゲットしている文字数）より小さかったらゲームオーバー
                    if (dt.remainBlock < dt.clearMojiNum[dt.Stage] - dt.getMojiNum)
                    {
                        // ステータスは全消しクリア
                        dt.clearStatus = 2;

                        // クリアフラグをtrueに
                        dt.isClear = true;
                    }
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
        // 文字消去フラグたってたら
        if (dt.isMojiDestroy)
        {
            // 文字消去
            Destroy(gameObject);
        }
    }
}
