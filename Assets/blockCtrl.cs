using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class blockCtrl : MonoBehaviour
{
    // �{�[�����Ԃ�������
    void OnCollisionEnter(Collision collision)
    {
        // �u���b�N�폜
        gameObject.SetActive(false);
    }
}
