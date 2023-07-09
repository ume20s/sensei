using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paddleCtrl : MonoBehaviour
{
    // 変数もろもろ
    public float speed = 10.0f;        // パドルの速さ

    // リジッドボディコンポーネント
    Rigidbody Rigid;

    // Start is called before the first frame update
    void Start()
    {
        // リジッドボディコンポーネントの取得
        Rigid = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        // 左右のキー入力により速度を変更する
        Rigid.velocity = new Vector3(Input.GetAxis("Horizontal") * speed, 0f, 0f);
    }
}
