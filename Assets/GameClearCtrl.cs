using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameClearCtrl : MonoBehaviour
{
    // 音声関連
    AudioSource audioSource;
    public AudioClip vOmedetou;

    // Start is called before the first frame update
    void Start()
    {
        // 音声コンポーネントの取得
        audioSource = GetComponent<AudioSource>();

        // ゲームクリア音声
        StartCoroutine("Omedetou");
    }

    // ゲームクリア音声
    IEnumerator Omedetou()
    {
        // 音声コンポーネント取得のためのタイムラグを考慮
        yield return new WaitForSeconds(0.01f);
        audioSource.PlayOneShot(vOmedetou);
    }

    // タップしたら
    public void onClick()
    {
        // ゲーム開始画面へ
        SceneManager.LoadScene("GameStart");
    }
}
