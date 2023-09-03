using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ballCtrl : MonoBehaviour
{
    // �ϐ��������
    public float ballSpeed = 5.0f;      // �{�[���̑���
    public float minSpeed = 1.0f;      // �{�[�������͈̔� 
    public float maxSpeed = 2.0f;

    Rigidbody Rigid;            // ���W�b�h�{�f�B�R���|�[�l���g
    Transform Trans;            // �g�����X�t�H�[���R���|�[�l���g�i�ʒu�擾�p�j

    // �����֘A
    AudioSource audioSource;
    public AudioClip seKin;
    public AudioClip seKon;
    public AudioClip seBreak;

    // Start is called before the first frame update
    void Start()
    {
        // ���W�b�h�{�f�B�R���|�[�l���g�̎擾
        Rigid = GetComponent<Rigidbody>();

        // �����R���|�[�l���g�̎擾
        audioSource = GetComponent<AudioSource>();

        // �����̈ʒu�̎擾
        Trans = transform;

        // �E�΂�45�x�ɐi��
        Rigid.velocity = new Vector3(ballSpeed, ballSpeed, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        // ���݂̑������擾
        Vector3 velocity = Rigid.velocity;

        // �f�o�b�O�p
        // Debug.Log(velocity);

        // ���x�̂����������Ȃ������琷��i�����΍�j
        if(velocity.y < 1.0f && velocity.y > -1.0f)
        {
            velocity.y = 1.0f;
        }

        // ������͈͓��ɗ}����
        float clampedSpeed = Mathf.Clamp(velocity.magnitude, minSpeed, maxSpeed);

        // ���x��ύX
        Rigid.velocity = velocity.normalized * clampedSpeed;
    }

    // ���̃I�u�W�F�N�g�ƏՓ�
    void OnCollisionEnter(Collision other)
    {
        // �Փ˂����̂��p�h����������
        if (other.gameObject.CompareTag("Paddle"))
        {
            // �Œ蕨�p���ʉ�
            audioSource.PlayOneShot(seKon);

            // �Փˈʒu�ɂ���Ĕ��ˊp�x��ς���
            Vector3 paddlePos = other.transform.position;           // �p�h���̈ʒu
            Vector3 ballPos = Trans.position;                       // �{�[���̈ʒu
            Vector3 direction = (ballPos - paddlePos).normalized;   // �{�[���̔��ˊp�x
            float speed = Rigid.velocity.magnitude;                 // ���݂̑��x
            Rigid.velocity = direction * speed;                     // �����Ƒ��x��ύX
        }
        else if(other.gameObject.CompareTag("Wall"))
        {
            // �Œ蕨�p���ʉ�
            audioSource.PlayOneShot(seKon);
        }
        else
        {
            // ������u���b�N�p���ʉ�
            audioSource.PlayOneShot(seKin);
        }
    }
}
