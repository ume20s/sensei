using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ballCtrl : MonoBehaviour
{
    // �ϐ��������
    public float speed = 5.0f;          // �{�[���̑���
    public float minSpeed = 5.0f;       // �{�[�������͈̔� 
    public float maxSpeed = 15.0f;

    // ���W�b�h�{�f�B�R���|�[�l���g
    Rigidbody Rigid;

    // Start is called before the first frame update
    void Start()
    {
        // ���W�b�h�{�f�B�R���|�[�l���g�̎擾
        Rigid = GetComponent<Rigidbody>();

        // �E�΂�45�x�ɐi��
        Rigid.velocity = new Vector3(speed, speed, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        // ���݂̑������擾
        Vector3 velocity = Rigid.velocity;

        // ������͈͓��ɗ}����
        float clampedSpeed = Mathf.Clamp(velocity.magnitude, minSpeed, maxSpeed);

        // xy�����������������班������
        float xRatio = (velocity.x < 0.5f) ? 2.0f : 0.0f;
        float yRatio = (velocity.y < 0.5f) ? 2.0f : 0.0f;
        Rigid.velocity = new Vector3(velocity.x + xRatio, velocity.y + yRatio, 0);

        // ���x��ύX
        Rigid.velocity = velocity.normalized * clampedSpeed;
    }
}
