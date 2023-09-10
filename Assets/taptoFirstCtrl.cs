using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class taptoFirstCtrl : MonoBehaviour
{
    // タップしたら
    public void onClick()
    {
        // 最初のステージへ
        SceneManager.LoadScene("GameStart");
    }
}
