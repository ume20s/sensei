using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mojiCtrl : MonoBehaviour
{
    // �ϐ��������
    public static int num;              // �����ԍ�
    public float speed = -2.5f;         // �����̗����鑬��

    // ���W�b�h�{�f�B�R���|�[�l���g
    Rigidbody Rigid;

    // Start is called before the first frame update
    void Start()
    {
        // ���W�b�h�{�f�B�R���|�[�l���g�̎擾
        Rigid = GetComponent<Rigidbody>();

        // ���ɗ�����
        Rigid.velocity = new Vector3(0.0f, speed, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
