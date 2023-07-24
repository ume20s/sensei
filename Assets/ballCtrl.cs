using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ballCtrl : MonoBehaviour
{
    // 変数もろもろ
    public float speed = 5.0f;          // ボールの速さ
    public float minSpeed = 5.0f;       // ボール速さの範囲 
    public float maxSpeed = 15.0f;

    // リジッドボディコンポーネント
    Rigidbody Rigid;

    // Start is called before the first frame update
    void Start()
    {
        // リジッドボディコンポーネントの取得
        Rigid = GetComponent<Rigidbody>();

        // 右斜め45度に進む
        Rigid.velocity = new Vector3(speed, speed, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        // 現在の速さを取得
        Vector3 velocity = Rigid.velocity;

        // 速さを範囲内に抑える
        float clampedSpeed = Mathf.Clamp(velocity.magnitude, minSpeed, maxSpeed);

        // xy成分が小さすぎたら少し増量
        float xRatio = (velocity.x < 0.5f) ? 2.0f : 0.0f;
        float yRatio = (velocity.y < 0.5f) ? 2.0f : 0.0f;
        Rigid.velocity = new Vector3(velocity.x + xRatio, velocity.y + yRatio, 0);

        // 速度を変更
        Rigid.velocity = velocity.normalized * clampedSpeed;
    }
}
