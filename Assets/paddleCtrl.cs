using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paddleCtrl : MonoBehaviour
{
    // 変数もろもろ
    public float speed = 10.0f;        // パドルの速さ
    Vector2 target;                    // タップした位置

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
        // タップされていたら
        if (Input.GetMouseButton(0))
        {
            // タップ位置を取得
            target = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            // 手前でタップなら操作開始
            if(target.y < -5.0f)
            {
                Rigid.velocity = new Vector3((target.x - this.transform.localPosition.x) * speed, 0.0f, 0.0f);
            }
            // デバッグ用
            // Debug.Log(target.x + "," + this.transform.localPosition.x);
        }
        // タップしていなかったらスピードゼロ
        else
        {
            Rigid.velocity = new Vector3(0.0f, 0.0f, 0.0f);
        }
    }


}
