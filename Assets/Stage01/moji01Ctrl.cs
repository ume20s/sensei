using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;

public class moji01Ctrl : MonoBehaviour
{
    // �ϐ��������
    public int num;                                 // �����̕����ԍ��i�������ɐݒ肳���j

    // �Q�[���I�u�W�F�N�g
    GameObject[] textMoji = new GameObject[2];      // �����C���W�P�[�^�[����

    // ���W�b�h�{�f�B�R���|�[�l���g
    Rigidbody Rigid;

    // �X�v���C�g�����_��
    SpriteRenderer spriteRenderer;

    // �����֘A
    AudioSource audioSource;
    public AudioClip seKirarin;
    public AudioClip seHenyo;

    // Start is called before the first frame update
    void Start()
    {
        // �Q�[���I�u�W�F�N�g�̎擾
        textMoji[0] = GameObject.Find("textSen");
        textMoji[1] = GameObject.Find("textSei");

        // ���W�b�h�{�f�B�R���|�[�l���g�̎擾
        Rigid = GetComponent<Rigidbody>();

        // �X�v���C�g�����_���R���|�[�l���g�̎擾
        spriteRenderer = GetComponent<SpriteRenderer>();

        // �����R���|�[�l���g�̎擾
        audioSource = GetComponent<AudioSource>();

        // ���C������O�Ɏ����Ă���
        GetComponent<SortingGroup>().sortingOrder = 3;

        // ���ɗ�����
        Rigid.velocity = new Vector3(0.0f, dt.MojiSpeed[dt.Stage], 0.0f);
    }

    // ���̃I�u�W�F�N�g�ƐڐG
    void OnTriggerEnter(Collider other)
    {
        // �ڐG�����̂��p�h����������
        if (other.CompareTag("Paddle"))
        {
            // ���𕶎���������
            if (num == dt.seikaiMoji[dt.Stage, dt.getMojiNum])
            {
                // ���𕶎��F�𖾂邭����
                textMoji[dt.getMojiNum].GetComponent<Text>().color = Color.yellow;

                // ���𕶎��������Z
                dt.getMojiNum++;

                // �������ʉ�
                audioSource.PlayOneShot(seKirarin);

                // �N���A�������ɒB������
                if (dt.getMojiNum == dt.clearMojiNum[dt.Stage])
                {
                    // �X�e�[�^�X�͐搶�N���A
                    dt.clearStatus = 1;

                    // �N���A�t���O��true��
                    dt.isClear = true;
                }
            }
            // ��������Ȃ�������ŏ�����
            else
            {
                // �s�������ʉ�
                audioSource.PlayOneShot(seHenyo);

                // �Q�b�g���������ԍ����[����
                dt.getMojiNum = 0;

                // �����F���Â�����
                for (int i = 0; i < dt.clearMojiNum[dt.Stage]; i++)
                {
                    textMoji[i].GetComponent<Text>().color = new Color(0.31f, 0.31f, 0.0f, 1.0f); ;
                }

                // �c��u���b�N���i�K�v�������|�Q�b�g���Ă��镶�����j��菬����������Q�[���I�[�o�[
                if (dt.remainBlock < dt.clearMojiNum[dt.Stage] - dt.getMojiNum)
                {
                    // �X�e�[�^�X�͑S�����N���A
                    dt.clearStatus = 2;

                    // �N���A�t���O��true��
                    dt.isClear = true;
                }
            }
            // ��\���i���ʉ����o�����߂�Destroy��SetActive(false)�ŏ����Ȃ��j
            spriteRenderer.enabled = false;
        }
        // �ڐG�����̂��ǂ������������
        else if(other.CompareTag("Wall"))
        {
            Destroy(gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        // ���������t���O�����Ă���
        if (dt.isMojiDestroy)
        {
            // ��������
            Destroy(gameObject);
        }
    }
}
