using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class blockCtrl : MonoBehaviour
{
    // ボールがぶつかったら
    void OnCollisionEnter(Collision collision)
    {
        // ブロック削除
        gameObject.SetActive(false);
    }
}
