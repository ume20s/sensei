using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class moji01Ctrl : MonoBehaviour
{
    // �ϐ��������
    public int num;                                 // �����̕����ԍ��i�������ɐݒ肳���j

    // �Q�[���I�u�W�F�N�g
    GameObject[] TextMoji = new GameObject[2];      // �����C���W�P�[�^�[����

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
            if (num == Stage01Director.seikai[Stage01Director.getMojiNum])
            {
                // ���𕶎��F�𖾂邭����
                TextMoji[num].GetComponent<Text>().color = Color.yellow;

                // ���𕶎��������Z
                Stage01Director.getMojiNum++;

                // �N���A�������ɒB������
                if(Stage01Director.getMojiNum == Stage01Director.clear)
                {
                    // �X�e�[�^�X�͐搶�N���A
                    Stage01Director.ClearStatus = 1;

                    // �N���A�t���O��true��
                    Stage01Director.isClear = true;
                }
            }
            // ��������Ȃ�������ŏ�����
            else
            {
                // �Q�b�g���������ԍ����[����
                Stage01Director.getMojiNum = 0;

                // �����F���Â�����
                for (int i = 0; i < Stage01Director.clear; i++)
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

    // Update is called once per frame
    void Update()
    {
        // �X�e�[�W�N���A��������
        if (Stage01Director.isClear)
        {
            // ������ł���
            Destroy(gameObject);
        }
    }

}