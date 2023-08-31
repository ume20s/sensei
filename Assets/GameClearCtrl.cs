using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameClearCtrl : MonoBehaviour
{
    // �����֘A
    AudioSource audioSource;
    public AudioClip vOmedetou;

    // Start is called before the first frame update
    void Start()
    {
        // �����R���|�[�l���g�̎擾
        audioSource = GetComponent<AudioSource>();

        // �Q�[���N���A����
        StartCoroutine("Omedetou");
    }

    // �Q�[���N���A����
    IEnumerator Omedetou()
    {
        // �����R���|�[�l���g�擾�̂��߂̃^�C�����O���l��
        yield return new WaitForSeconds(0.01f);
        audioSource.PlayOneShot(vOmedetou);
    }

    // �^�b�v������
    public void onClick()
    {
        // �Q�[���J�n��ʂ�
        SceneManager.LoadScene("GameStart");
    }
}
