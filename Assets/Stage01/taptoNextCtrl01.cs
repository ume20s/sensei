using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class taptoNextCtrl01 : MonoBehaviour
{
    // タップしたら
    public void onClick()
    {
        // 次のステージへ
        SceneManager.LoadScene("GameClear");
    }
}
