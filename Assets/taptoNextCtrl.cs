using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class taptoNextCtrl : MonoBehaviour
{
    // �^�b�v������
    public void onClick()
    {
        // ���̃X�e�[�W��
        SceneManager.LoadScene(dt.NextStage[dt.Stage]);
    }
}
