using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;

public class block02Ctrl : MonoBehaviour
{
    // �Q�[���I�u�W�F�N�g
    public GameObject mojiPrefab;   // ����Prefab
    GameObject moji;                // �������镶���I�u�W�F�N�g
    GameObject textScore;           // �X�R�A
    GameObject textHighScore;       // �n�C�X�R�A

    // ����prefab�̃X�v���C�g�����_���[�R���|�[�l���g
    SpriteRenderer spriteRenderer;

    // �����X�v���C�g
    public Sprite[] mojiSprite = new Sprite[9];

    // Start is called before the first frame update
    void Start()
    {
        // �Q�[���I�u�W�F�N�g�̎擾
        textScore = GameObject.Find("textScore");
        textHighScore = GameObject.Find("textHighScore");

        // ���C������O�Ɏ����Ă���
        GetComponent<SortingGroup>().sortingOrder = 2;
    }

    // �{�[�����Ԃ�������
    void OnCollisionEnter(Collision collision)
    {
        // �X�R�A���Z
        dt.Score += dt.Point[dt.Stage];
        textScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
        checkHighScore();

        // �u���b�N�폜
        gameObject.SetActive(false);
        dt.remainBlock--;

        // �u���b�N���S����������N���A
        if(dt.remainBlock == 0)
        {
            // �X�e�[�^�X�͑S�����N���A
            dt.clearStatus = 2;

            // �N���A�t���O��true��
            dt.isClear = true;
        }

        // �X�e�[�W�ݒ薈�̊m���ŕ���������
        if (Random.Range(0, 100) < dt.mojiProbabirity[dt.Stage])
        {
            // �������镶���ԍ�
            int num = Random.Range(0, dt.mojiSyurui[dt.Stage]);

            // �����𐶐�
            moji = Instantiate(mojiPrefab, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y - 1.0f, 0.0f), Quaternion.identity);

            // �����ԍ����當�����Z�b�g
            spriteRenderer = moji.GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = mojiSprite[num];

            // �f�o�b�O�p
            // Debug.Log("num = " + num);
            // Debug.Log("moji= " + spriteRenderer);

            // �I�u�W�F�N�g�ŕ����ԍ���ێ�����
            moji.GetComponent<moji02Ctrl>().num = num;
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
}
