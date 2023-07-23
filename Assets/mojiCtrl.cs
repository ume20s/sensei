using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mojiCtrl : MonoBehaviour
{
    // 変数もろもろ
    public static int num;              // 文字番号
    public float speed = -2.5f;         // 文字の落ちる速さ

    // リジッドボディコンポーネント
    Rigidbody Rigid;

    // Start is called before the first frame update
    void Start()
    {
        // リジッドボディコンポーネントの取得
        Rigid = GetComponent<Rigidbody>();

        // 下に落ちる
        Rigid.velocity = new Vector3(0.0f, speed, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
