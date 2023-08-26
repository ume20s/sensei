using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameStartCtrl : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        // ���ϐ��̏�����
        dt.Score = 0;

        // �f�o�b�O�p�n�C�X�R�A���[���N���A
        // dt.HighScore = 0;
        // PlayerPrefs.SetInt(dt.SAVE_KEY, dt.HighScore);
        // PlayerPrefs.Save();

        // �n�C�X�R�A�ǂݍ���
        dt.HighScore = PlayerPrefs.GetInt(dt.SAVE_KEY, 0);

        // �f�o�b�O�p
        // Debug.Log(dt.HighScore);
    }

    // �^�b�v������
    public void onClick()
    {
        // �X�e�[�W�P��
        SceneManager.LoadScene("stage01");
    }
}
