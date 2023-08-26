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
    public static int remainBlock;              // �c��u���b�N��
    public static int getMojiNum;               // �Q�b�g���������ԍ�
    public static bool isClear = false;         // �Q�[���N���A�t���O
    public static bool isMojiDestroy = false;   // ���������t���O
    public static int ClearStatus;              // �N���A�X�e�[�^�X�i1:���񂹂��N���A 2:�S�����N���A�j

    // �����֘A
    AudioSource audioSource;
    public AudioClip vGameStart;
    public AudioClip vStageClear;
    public AudioClip sePi;
    public AudioClip seKirarin;

    // �Q�[���I�u�W�F�N�g
    public GameObject blockPrefab;
    GameObject[] block = new GameObject[50];            // �u���b�N
    GameObject TextScore;                               // �X�R�A������
    GameObject TextHighScore;                           // �n�C�X�R�A������
    GameObject TextSen;                                 // ��
    GameObject TextSei;                                 // ��
    GameObject TextSenseiClear;                         // �搶�N���A�\��
    GameObject TextAllClear;                            // �S�����N���A�\��
    GameObject TapToNext;                               // �^�b�v���Ď��̃X�e�[�W
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
        TapToNext = GameObject.Find("TapToNext");
        Ball = GameObject.Find("ball");
        Paddle = GameObject.Find("paddle");

        // �����R���|�[�l���g�̎擾
        audioSource = GetComponent<AudioSource>();

        // �N���A�\���������Ă���
        TextSenseiClear.SetActive(false);
        TextAllClear.SetActive(false);
        TapToNext.SetActive(false);

        // �X�R�A������
        dt.score = 0;
        TextScore.GetComponent<Text>().text = "Score:" + dt.score.ToString("D5");

        // �u���b�N��z�u
        remainBlock = 49;
        for (int i = 0; i<49; i++)
        {
            block[i] = Instantiate(blockPrefab, new Vector3(dt.x[i], dt.y[i], 0.0f), Quaternion.identity);
            spriteRenderer = block[i].GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = senseiSprite[i];
        }

        // �Q�[���J�n����
        StartCoroutine("GameStart");
    }

    // Update is called once per frame
    void Update()
    {
        // �N���A���Ă�����
        if (isClear)
        {
            // �N���A�t���Ofalse�i���d�˓���h�~����j
            isClear = false;

            // �Ō�̕������Q�b�g�������ʉ�
            audioSource.PlayOneShot(seKirarin);

            // ���V���Ă��镶��������
            isMojiDestroy = true;

            // �{�[���ƃp�h��������
            Ball.SetActive(false);
            Paddle.SetActive(false);

            // �搶�C���W�P�[�^������
            TextSen.SetActive(false);
            TextSei.SetActive(false);

            // �N���A�X�e�[�^�X�ɂ��G���f�B���O�G�t�F�N�g��ς���
            switch (ClearStatus)
            {
                case 0:
                    break;
                    // NOTREACHED
                
                // �搶�G���f�B���O
                case 1:
                    StartCoroutine("SenseiEnding");
                    break;

                // �S�����G���f�B���O
                case 2:
                    TextAllClear.SetActive(true);
                    break;

                default:
                    break;
                    // NOTREACHED
            }
        }
    }

    // �Q�[���X�^�[�g���ʉ�
    IEnumerator GameStart()
    {
        yield return new WaitForSeconds(0.05f);
        audioSource.PlayOneShot(vGameStart);
    }

    // �搶�G���f�B���O
    IEnumerator SenseiEnding()
    {
        // �搶�G���f�B���O�\��
        TextSenseiClear.SetActive(true);

        // �X�e�[�W�N���A���ʉ�
        audioSource.PlayOneShot(vStageClear);
        yield return new WaitForSeconds(2.5f);

        // �c��u���b�N�𓾓_��
        for (int i = 0; i < 49; i++)
        {
            // �u���b�N���A�N�e�B�u��������
            if (block[i].activeSelf)
            {
                // ���ʉ�
                audioSource.PlayOneShot(sePi);

                // �Q�{�̓��_���X�R�A�ɕt��
                dt.score += point * 2;
                TextScore.GetComponent<Text>().text = "Score:" + dt.score.ToString("D5");

                // �u���b�N����
                block[i].SetActive(false);
                yield return new WaitForSeconds(0.05f);
            }
        }
        // �^�b�v���Ď��̃X�e�[�W��
        TapToNext.SetActive(true);
    }
}
