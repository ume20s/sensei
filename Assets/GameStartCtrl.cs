using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameStartCtrl : MonoBehaviour
{
    // �^�b�v������
    public void onClick()
    {
        // �X�e�[�W�P��
        SceneManager.LoadScene("stage01");
    }

}
