using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class taptoNextCtrl01 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    // �^�b�v������
    public void onClick()
    {
        // ���̃X�e�[�W��
        SceneManager.LoadScene("GameClear");
    }
}
