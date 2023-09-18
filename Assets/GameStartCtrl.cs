using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameStartCtrl : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        // 大域変数の初期化
        dt.Score = 0;

        // デバッグ用ハイスコアをゼロクリア
        // dt.HighScore = 0;
        // PlayerPrefs.SetInt(dt.SAVE_KEY, dt.HighScore);
        // PlayerPrefs.Save();

        // ハイスコア読み込み
        dt.HighScore = PlayerPrefs.GetInt(dt.SAVE_KEY, 0);

        // デバッグ用
        // Debug.Log(dt.HighScore);
    }

    // タップしたら
    public void onClick()
    {
        // ステージ１へ
        SceneManager.LoadScene("stage01");
    }
}
