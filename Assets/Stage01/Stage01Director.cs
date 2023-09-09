using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stage01Director : MonoBehaviour
{
    // �����֘A
    AudioSource audioSource;
    public AudioClip vGameStart;
    public AudioClip vStageClear;
    public AudioClip sePi;
    public AudioClip seKirarin;

    // �Q�[���I�u�W�F�N�g
    public GameObject blockPrefab;
    GameObject[] block = new GameObject[49];            // �u���b�N
    GameObject textScore;                               // �X�R�A������
    GameObject textHighScore;                           // �n�C�X�R�A������
    GameObject[] textMoji = new GameObject[2];          // �����C���W�P�[�^�[����
    GameObject textSenseiClear;                         // �搶�N���A�\��
    GameObject textAllClear;                            // �S�����N���A�\��
    GameObject TapToNext;                               // �^�b�v���Ď��̃X�e�[�W
    GameObject Ball;                                    // �{�[��
    GameObject Paddle;                                  // �p�h��

    // �u���b�Nprefab�̃X�v���C�g�����_���[�R���|�[�l���g
    SpriteRenderer spriteRenderer;

    // �u���b�N�X�v���C�g
    public Sprite[] blockSprite = new Sprite[49];

    // Start is called before the first frame update
    void Start()
    {
        // �������̕ϐ��̏�����
        dt.Stage = 0;
        dt.isClear = false;
        dt.clearStatus = -1;
        dt.isMojiDestroy = false;
        dt.getMojiNum = 0;

        // �Q�[���I�u�W�F�N�g�̎擾
        textScore = GameObject.Find("textScore");
        textHighScore = GameObject.Find("textHighScore");
        textMoji[0] = GameObject.Find("textSen");
        textMoji[1] = GameObject.Find("textSei");
        textSenseiClear = GameObject.Find("textSenseiClear");
        textAllClear = GameObject.Find("textAllClear");
        TapToNext = GameObject.Find("TapToNext");
        Ball = GameObject.Find("ball");
        Paddle = GameObject.Find("paddle");

        // �����R���|�[�l���g�̎擾
        audioSource = GetComponent<AudioSource>();

        // �N���A�\���������Ă���
        textSenseiClear.SetActive(false);
        textAllClear.SetActive(false);
        TapToNext.SetActive(false);

        // �X�R�A������
        dt.Score = 0;
        textScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
        textHighScore.GetComponent<Text>().text = "HighScore:" + dt.HighScore.ToString("D5");

        // �u���b�N��z�u
        dt.remainBlock = 49;
        for (int i = 0; i<49; i++)
        {
            block[i] = Instantiate(blockPrefab, new Vector3(dt.x[i], dt.y[i], 0.0f), Quaternion.identity);
            spriteRenderer = block[i].GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = blockSprite[i];
        }

        // �Q�[���J�n����
        StartCoroutine("GameStart");
    }

    // Update is called once per frame
    void Update()
    {
        // �N���A���Ă�����
        if (dt.isClear)
        {
            // �N���A�t���Ofalse�i���d�˓���h�~����j
            dt.isClear = false;

            // ���V���Ă��镶��������
            dt.isMojiDestroy = true;

            // �Ō�̕������Q�b�g�������ʉ�
            audioSource.PlayOneShot(seKirarin);

            // �{�[���ƃp�h��������
            Ball.SetActive(false);
            Paddle.SetActive(false);

            // �搶�C���W�P�[�^������
            textMoji[0].SetActive(false);
            textMoji[1].SetActive(false);

            // �N���A�X�e�[�^�X�ɂ��G���f�B���O�G�t�F�N�g��ς���
            switch (dt.clearStatus)
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
                    // �S�����G���f�B���O�\��
                    textAllClear.SetActive(true);

                    // �X�e�[�W�N���A����
                    audioSource.PlayOneShot(vStageClear);

                    // �^�b�v���Ď��̃X�e�[�W��
                    TapToNext.SetActive(true);
                    break;

                default:
                    break;
                    // NOTREACHED
            }
        }
    }

    // �n�C�X�R�A�`�F�b�N
    private void checkHighScore()
    {
        // ���X�R�A���n�C�X�R�A����������
        if (dt.Score > dt.HighScore)
        {
            // �n�C�X�R�A�X�V
            dt.HighScore = dt.Score;
            textHighScore.GetComponent<Text>().text = "HighScore:" + dt.HighScore.ToString("D5");

            // �n�C�X�R�A�ۑ�
            PlayerPrefs.SetInt(dt.SAVE_KEY, dt.HighScore);
            PlayerPrefs.Save();
        }
    }

    // �Q�[���X�^�[�g����
    IEnumerator GameStart()
    {
        yield return new WaitForSeconds(0.01f);
        audioSource.PlayOneShot(vGameStart);
    }

    // �搶�G���f�B���O
    IEnumerator SenseiEnding()
    {
        // �搶�G���f�B���O�\��
        textSenseiClear.SetActive(true);

        // �X�e�[�W�N���A����
        audioSource.PlayOneShot(vStageClear);
        yield return new WaitForSeconds(2.0f);

        // �c��u���b�N�𓾓_��
        for (int i = 48; i >= 0; i--)
        {
            // �u���b�N���A�N�e�B�u��������
            if (block[i].activeSelf)
            {
                // ���ʉ�
                audioSource.PlayOneShot(sePi);

                // �Q�{�̓��_���X�R�A�ɕt��
                dt.Score += dt.Point[dt.Stage] * 2;
                textScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
                checkHighScore();

                // �u���b�N����
                block[i].SetActive(false);
                yield return new WaitForSeconds(0.05f);
            }
        }
        // �^�b�v���Ď��̃X�e�[�W��
        TapToNext.SetActive(true);
    }
}
