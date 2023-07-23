using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameDirector : MonoBehaviour
{
    // 現在のステージ（０から始まっているので注意）
    public const int stage = 0;

    // ゲームオブジェクト
    public GameObject blockPrefab;
    GameObject[] block = new GameObject[50];            // ブロック
    GameObject TextScore;                               // スコア

    // ブロックprefabのスプライトレンダラーコンポーネント
    SpriteRenderer spriteRenderer;

    // せんせいスプライト
    public Sprite[] senseiSprite = new Sprite[50];

    // Start is called before the first frame update
    void Start()
    {
        // ゲームオブジェクトの取得
        TextScore = GameObject.Find("textScore");

        // スコア初期化
        dt.score = 0;
        TextScore.GetComponent<Text>().text = "Score:" + dt.score.ToString("D4");

        // ブロックを配置
        for (int i = 0; i<49; i++)
        {
            block[i] = Instantiate(blockPrefab, new Vector3(dt.x[i], dt.y[i], 0.0f), Quaternion.identity);
            spriteRenderer = block[i].GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = senseiSprite[i];
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
