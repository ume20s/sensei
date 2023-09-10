using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stage02Director : MonoBehaviour
{
    // �����֘A
    AudioSource audioSource;
    public AudioClip vGameStart;
    public AudioClip vStageClear;
    public AudioClip vGameOver;
    public AudioClip sePi;
    public AudioClip seKirarin;

    // �Q�[���I�u�W�F�N�g
    public GameObject blockPrefab;
    GameObject[] block = new GameObject[49];            // �u���b�N
    GameObject textScore;                               // �X�R�A������
    GameObject textHighScore;                           // �n�C�X�R�A������
    GameObject[] textMoji = new GameObject[4];          // �����C���W�P�[�^�[����
    GameObject textSenseiClear;                         // �搶�N���A�\��
    GameObject textGameOver;                            // �Q�[���I�[�o�[�\��
    GameObject TapToNext;                               // �^�b�v���Ď��̃X�e�[�W
    GameObject TapToFirst;                              // �^�b�v���čŏ��̃X�e�[�W
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
        dt.Stage = 1;
        dt.isClear = false;
        dt.clearStatus = -1;
        dt.isMojiDestroy = false;
        dt.getMojiNum = 0;

        // �Q�[���I�u�W�F�N�g�̎擾
        textScore = GameObject.Find("textScore");
        textHighScore = GameObject.Find("textHighScore");
        textMoji[0] = GameObject.Find("textSe1");
        textMoji[1] = GameObject.Find("textNn");
        textMoji[2] = GameObject.Find("textSe2");
        textMoji[3] = GameObject.Find("textIi");
        textSenseiClear = GameObject.Find("textSenseiClear");
        textGameOver = GameObject.Find("textGameOver");
        TapToNext = GameObject.Find("TapToNext");
        TapToFirst = GameObject.Find("TapToFirst");
        Ball = GameObject.Find("ball");
        Paddle = GameObject.Find("paddle");

        // �����R���|�[�l���g�̎擾
        audioSource = GetComponent<AudioSource>();

        // �N���A�\���������Ă���
        textSenseiClear.SetActive(false);
        textGameOver.SetActive(false);
        TapToNext.SetActive(false);
        TapToFirst.SetActive(false);

        // �X�R�A������
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

            // BGM���I�t
            audioSource.Stop();

            // �Ō�̕������Q�b�g�������ʉ�
            audioSource.PlayOneShot(seKirarin);

            // �{�[���ƃp�h��������
            Ball.SetActive(false);
            Paddle.SetActive(false);

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

                // �Q�[���I�[�o�[
                case 2:
                    // �Q�[���I�[�o�[�\��
                    textGameOver.SetActive(true);

                    // �Q�[���I�[�o�[����
                    audioSource.PlayOneShot(vGameOver);

                    // �^�b�v���čŏ��̃X�e�[�W��
                    TapToFirst.SetActive(true);
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
        // �搶�C���W�P�[�^������
        for (int i = 0; i < 4; i++)
        {
            textMoji[i].SetActive(false);
        }

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