using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ballCtrl : MonoBehaviour
{
    // 変数もろもろ
    public float speed = 5.0f;        // ボールの速さ

    // リジッドボディコンポーネント
    Rigidbody Rigid;

    // Start is called before the first frame update
    void Start()
    {
        // リジッドボディコンポーネントの取得
        Rigid = GetComponent<Rigidbody>();

        // 右斜め45度に進む
        Rigid.velocity = new Vector3(speed, speed, 0f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
