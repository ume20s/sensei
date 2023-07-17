using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paddleCtrl : MonoBehaviour
{
    // �ϐ��������
    public float speed = 10.0f;        // �p�h���̑���
    Vector2 target;                    // �^�b�v�����ʒu

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
        // �^�b�v����Ă�����
        if (Input.GetMouseButton(0))
        {
            // �^�b�v�ʒu���擾
            target = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            // ��O�Ń^�b�v�Ȃ瑀��J�n
            if(target.y < -5.0f)
            {
                Rigid.velocity = new Vector3((target.x - this.transform.localPosition.x) * speed, 0.0f, 0.0f);
            }
            // �f�o�b�O�p
            // Debug.Log(target.x + "," + this.transform.localPosition.x);
        }
        // �^�b�v���Ă��Ȃ�������X�s�[�h�[��
        else
        {
            Rigid.velocity = new Vector3(0.0f, 0.0f, 0.0f);
        }
    }
}
