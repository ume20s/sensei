using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stage01Director : MonoBehaviour
{
    // �ϐ��������i�X�e�[�W�ˑ��j
    public const int clear = 2;             // �N���A������
    public const int point = 10;            // �u���b�N�P�̓��_
    public static int[] seikai = { 0, 1 };  // ���𕶎��ԍ��i0:�� 1:���j

    // �ϐ��������i�X�e�[�W���ʁj
    public static int remainBlock;          // �c��u���b�N��
    public static int getMojiNum;           // �Q�b�g���������ԍ�
    public static bool isClear = false;     // �Q�[���N���A�t���O
    public static int ClearStatus;          // �N���A�X�e�[�^�X�i1:���񂹂��N���A 2:�S�����N���A�j


    // �Q�[���I�u�W�F�N�g
    public GameObject blockPrefab;
    GameObject[] block = new GameObject[50];            // �u���b�N
    GameObject TextScore;                               // �X�R�A������
    GameObject TextHighScore;                           // �n�C�X�R�A������
    GameObject TextSen;                                 // ��
    GameObject TextSei;                                 // ��
    GameObject TextSenseiClear;                         // �搶�N���A�\��
    GameObject TextAllClear;                            // �S�����N���A�\��
    GameObject Ball;                                    // �{�[��
    GameObject Paddle;                                  // �p�h��

    // �u���b�Nprefab�̃X�v���C�g�����_���[�R���|�[�l���g
    SpriteRenderer spriteRenderer;

    // ���񂹂��X�v���C�g
    public Sprite[] senseiSprite = new Sprite[50];

    // Start is called before the first frame update
    void Start()
    {
        // �Q�[���I�u�W�F�N�g�̎擾
        TextScore = GameObject.Find("textScore");
        TextHighScore = GameObject.Find("textHighScore");
        TextSen = GameObject.Find("textSen");
        TextSei = GameObject.Find("textSei");
        TextSenseiClear = GameObject.Find("textSenseiClear");
        TextAllClear = GameObject.Find("textAllClear");
        Ball = GameObject.Find("ball");
        Paddle = GameObject.Find("paddle");

        // �N���A�\���������Ă���
        TextSenseiClear.SetActive(false);
        TextAllClear.SetActive(false);

        // �X�R�A������
        dt.score = 0;
        TextScore.GetComponent<Text>().text = "Score:" + dt.score.ToString("D4");

        // �u���b�N��z�u
        remainBlock = 49;
        for (int i = 0; i<49; i++)
        {
            block[i] = Instantiate(blockPrefab, new Vector3(dt.x[i], dt.y[i], 0.0f), Quaternion.identity);
            spriteRenderer = block[i].GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = senseiSprite[i];
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (isClear)
        {
            // �{�[���ƃp�h��������
            Ball.SetActive(false);
            Paddle.SetActive(false);

            // �搶�C���W�P�[�^������
            TextSen.SetActive(false);
            TextSei.SetActive(false);

            switch (ClearStatus)
            {
                case 0:
                    break;
                
                case 1:
                    TextSenseiClear.SetActive(true);
                    break;

                case 2:
                    TextAllClear.SetActive(true);
                    break;

                default:
                    break;
            }
        }
    }
}
