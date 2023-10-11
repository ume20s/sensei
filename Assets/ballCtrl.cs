using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ballCtrl : MonoBehaviour
{
    // デバッグ用
    // float xmax=0,ymax=0,xmin=0,ymin=0;

    // 変数もろもろ
    float ballSpeed = 5.0f;         // ボールの速さ
    float minSpeed = 8.0f;          // ボール速さの範囲 
    float maxSpeed = 20.0f;

    Rigidbody Rigid;                // リジッドボディコンポーネント
    Transform Trans;                // トランスフォームコンポーネント（位置取得用）

    // 音声関連
    AudioSource audioSource;
    public AudioClip seKin;
    public AudioClip seKon;

    // Start is called before the first frame update
    void Start()
    {
        // リジッドボディコンポーネントの取得
        Rigid = GetComponent<Rigidbody>();

        // 音声コンポーネントの取得
        audioSource = GetComponent<AudioSource>();

        // 自分の位置の取得
        Trans = transform;

        // 右斜め45度に進む
        Rigid.velocity = new Vector3(ballSpeed, ballSpeed, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        // ボール消去フラグが立っていたら自滅
        if(dt.isBallDestroy ) {
            Destroy(gameObject);
        }

        // 現在の速さを取得
        Vector3 velocity = Rigid.velocity;

        // ボールが範囲外にあったら中に入れる
        if(Trans.position.x<-6.3f) Trans.position = new Vector3(-6.3f,Trans.position.y,0.0f);
        if(Trans.position.x>6.3f) Trans.position = new Vector3(6.3f,Trans.position.y,0.0f);
        if(Trans.position.y<-10.2f) Trans.position = new Vector3(Trans.position.x,-10.2f,0.0f);
        if(Trans.position.y>10.2f) Trans.position = new Vector3(Trans.position.x,10.2f,0.0f);

        // デバッグ用
        // if(xmax<Trans.position.x) xmax = Trans.position.x;
        // if(ymax<Trans.position.y) ymax = Trans.position.y;
        // if(xmin>Trans.position.x) xmin = Trans.position.x;
        // if(ymin>Trans.position.y) ymin = Trans.position.y;
        // Debug.Log(xmin+","+xmax+","+ymin+","+ymax);

        // 速度のｙ成分が少なかったら盛る（千日手対策）
        if(velocity.y < 2.0f && velocity.y > -2.0f)
        {
            if(Trans.position.y > 0)    // ボール位置が上半分だったら
            {
                velocity.y = -10.0f;     // 下に盛る
            }
            else                        // 下半分だったら
            {
                velocity.y = 7.0f;      // 上に盛る
            }
        }

        // 速さを範囲内に抑える
        float clampedSpeed = Mathf.Clamp(velocity.magnitude, minSpeed, maxSpeed);

        // 速度を変更
        Rigid.velocity = velocity.normalized * clampedSpeed;
    }

    // 他のオブジェクトと衝突
    void OnCollisionEnter(Collision other)
    {
        // 衝突したのがパドルだったら
        if (other.gameObject.CompareTag("Paddle"))
        {
            // 固定物用効果音
            audioSource.PlayOneShot(seKon);

            // 衝突位置によって反射角度を変える
            Vector3 paddlePos = other.transform.position;           // パドルの位置
            Vector3 ballPos = Trans.position;                       // ボールの位置
            Vector3 direction = (ballPos - paddlePos).normalized;   // ボールの反射角度
            float speed = Rigid.velocity.magnitude;                 // 現在の速度
            Rigid.velocity = direction * speed;                     // 向きと速度を変更
        }
        else if(other.gameObject.CompareTag("Wall"))
        {
            // 固定物用効果音
            audioSource.PlayOneShot(seKon);
        }
        else
        {
            // 消えるブロック用効果音
            audioSource.PlayOneShot(seKin);
        }
    }
}
