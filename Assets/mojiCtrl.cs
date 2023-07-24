using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class mojiCtrl : MonoBehaviour
{
    // �ϐ��������
    public int num;                                 // �����ԍ�

    // �Q�[���I�u�W�F�N�g
    GameObject[] TextMoji = new GameObject[6];      // ����

    // ���W�b�h�{�f�B�R���|�[�l���g
    Rigidbody Rigid;

    // Start is called before the first frame update
    void Start()
    {
        // �Q�[���I�u�W�F�N�g�̎擾
        TextMoji[0] = GameObject.Find("textSen");
        TextMoji[1] = GameObject.Find("textSei");

        // ���W�b�h�{�f�B�R���|�[�l���g�̎擾
        Rigid = GetComponent<Rigidbody>();

        // ���ɗ�����
        Rigid.velocity = new Vector3(0.0f, -2.5f, 0.0f);
    }

    // ���̃I�u�W�F�N�g�ƐڐG
    void OnTriggerEnter(Collider other)
    {
        // �ڐG�����̂��p�h����������
        if (other.CompareTag("Paddle"))
        {
            // �f�o�b�O�p
            // Debug.Log(other.CompareTag("Paddle") + "," + num);

            // ���𕶎���������
            if (num == dt.getMoji)
            {
                // ���𕶎��F�𖾂邭����
                TextMoji[num].GetComponent<Text>().color = Color.yellow;

                // ���𕶎��������Z
                dt.getMoji++;

                // �N���A�������ɒB������
                if(dt.getMoji == GameDirector.clear)
                {
                    // �N���A�t���O��true��
                    GameDirector.isClear = true;
                }
            }
            // ��������Ȃ�������ŏ�����
            else
            {
                // �Q�b�g�����������[����
                dt.getMoji = 0;

                // �����F���Â�����
                for (int i = 0; i < GameDirector.clear; i++)
                {
                    TextMoji[num].GetComponent<Text>().color = new Color(0.31f, 0.31f, 0.0f, 1.0f); ;
                }
            }
            // ������
            Destroy(gameObject);
        }
        // �ڐG�����̂��ꂾ�����������
        else if(other.CompareTag("Bottom"))
        {
            Destroy(gameObject);
        }
    }
}
