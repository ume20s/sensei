using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class blockCtrl : MonoBehaviour
{
    // �X�R�A�̃Q�[���I�u�W�F�N�g
    GameObject TextScore;

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
    }
}
