using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class taptoFirstCtrl : MonoBehaviour
{
    // �^�b�v������
    public void onClick()
    {
        // �ŏ��̃X�e�[�W��
        SceneManager.LoadScene("GameStart");
    }
}
