using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paddleCtrl : MonoBehaviour
{
    // �ϐ��������
    public float speed = 10.0f;        // �p�h���̑���

    // ���W�b�h�{�f�B�R���|�[�l���g
    Rigidbody Rigid;

    // Start is called before the first frame update
    void Start()
    {
        // ���W�b�h�{�f�B�R���|�[�l���g�̎擾
        Rigid = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        // ���E�̃L�[���͂ɂ�葬�x��ύX����
        Rigid.velocity = new Vector3(Input.GetAxis("Horizontal") * speed, 0f, 0f);
    }
}
