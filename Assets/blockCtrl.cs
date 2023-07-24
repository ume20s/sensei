using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class blockCtrl : MonoBehaviour
{
    // �Q�[���I�u�W�F�N�g
    public GameObject mojiPrefab;   // ����Prefab
    GameObject moji;                // �������镶���I�u�W�F�N�g
    GameObject TextScore;           // �X�R�A

    // ����prefab�̃X�v���C�g�����_���[�R���|�[�l���g
    SpriteRenderer spriteRenderer;

    // �����X�v���C�g
    public Sprite[] mojiSprite = new Sprite[2];

    // Start is called before the first frame update
    void Start()
    {
        // �Q�[���I�u�W�F�N�g�̎擾
        TextScore = GameObject.Find("textScore");
    }

    // �{�[�����Ԃ�������
    void OnCollisionEnter(Collision collision)
    {
        // �u���b�N�폜
        gameObject.SetActive(false);

        // �X�R�A���Z
        dt.score += 10;
        TextScore.GetComponent<Text>().text = "Score:" + dt.score.ToString("D4");

        // 1/2�̊m���ŕ����𐶐�
        if(Random.Range(0, 2) == 0)
        {
            // �������镶���ԍ�
            int num = Random.Range(0, 2);
            
            // �����𐶐�
            moji = Instantiate(mojiPrefab, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y - 1.0f, 0.0f), Quaternion.identity);

            // �����ԍ����當�����Z�b�g

            spriteRenderer = moji.GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = mojiSprite[num];

            mojiCtrl hoge = moji.GetComponent<mojiCtrl>();
            hoge.num = num;
        }
    }
}
