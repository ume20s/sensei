using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameStartCtrl : MonoBehaviour
{
    // タップしたら
    public void onClick()
    {
        // ステージ１へ
        SceneManager.LoadScene("stage01");
    }

}
