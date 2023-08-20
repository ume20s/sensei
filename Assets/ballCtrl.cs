using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ballCtrl : MonoBehaviour
{
    // 変数もろもろ
    public float speed = 5.0f;          // ボールの速さ
    public float minSpeed = 10.0f;      // ボール速さの範囲 
    public float maxSpeed = 15.0f;

    Rigidbody Rigid;            // リジッドボディコンポーネント
    Transform Trans;            // トランスフォームコンポーネント（位置取得用）

    // Start is called before the first frame update
    void Start()
    {
        // コンポーネントの取得
        Rigid = GetComponent<Rigidbody>();

        // 自分の位置を取得
        Trans = transform;

        // 右斜め45度に進む
        Rigid.velocity = new Vector3(speed, speed, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        // 現在の速さを取得
        Vector3 velocity = Rigid.velocity;

        // デバッグ用
        // Debug.Log(velocity);

        // 速度のｙ成分が少なかったら盛る（千日手対策）
        if(velocity.y < 1.0f && velocity.y > -1.0f)
        {
            velocity.y = 1.0f;
        }

        // 速さを範囲内に抑える
        float clampedSpeed = Mathf.Clamp(velocity.magnitude, minSpeed, maxSpeed);

        // 速度を変更
        Rigid.velocity = velocity.normalized * clampedSpeed;
    }

    // 他のオブジェクトと衝突
    void OnCollisionEnter(Collision other)
    {
        // 衝突したのがパドルだったら衝突位置によって反射角度を変える
        if (other.gameObject.CompareTag("Paddle"))
        {
            Vector3 paddlePos = other.transform.position;           // パドルの位置
            Vector3 ballPos = Trans.position;                       // ボールの位置
            Vector3 direction = (ballPos - paddlePos).normalized;   // ボールの反射角度
            float speed = Rigid.velocity.magnitude;                 // 現在の速度
            Rigid.velocity = direction * speed;                     // 向きと速度を変更
        }
    }
}
