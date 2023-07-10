using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameDirector : MonoBehaviour
{
    // ゲームオブジェクト
    public GameObject blockPrefab;
    GameObject[] block = new GameObject[50];            // ブロック

    // ブロックプレファブのスプライトレンダラーコンポーネント
    SpriteRenderer spriteRenderer;

    // せんせいスプライト
    public Sprite[] senseiSprite = new Sprite[50];


    // Start is called before the first frame update
    void Start()
    {
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
