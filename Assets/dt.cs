using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dt : MonoBehaviour
{
    // �X�e�[�W�R���g���[��
    public static int Stage;                    // �X�e�[�W�i���o�[
    public static bool isClear;                 // �N���A�t���O
    public static int clearStatus;              // �N���A�X�e�[�^�X�i1:���񂹂��N���A 2:�S�����N���A�j
    public static bool isMojiDestroy;           // �c�蕂�V���������t���O
    public static int remainBlock;              // �c��u���b�N��
    public static int getMojiNum;               // �Q�b�g���������ԍ�

    // �X�R�A�֘A
    public static int Score;
    public static int HighScore;
    public static string SAVE_KEY = "HighScore";    // �n�C�X�R�A�ۑ��L�[

    // ���̃X�e�[�W��
    public static readonly string[] NextStage =
    {
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear"
    };

    // �X�e�[�W���̃u���b�N�|�C���g
    public static readonly int[] Point =
    {
        10, 20, 30, 40, 50, 60, 70, 80, 90
    };

    // �X�e�[�W���̕��������X�s�[�h
    public static readonly float[] MojiSpeed =
    {
        -2.5f, -3.0f, -3.5f, -5.0f, -5.5f, -6.0f, -7.5f, -8.0f, -8.5f
    };

    // �u���b�N�ʒu���W
    public static readonly float[] x =
    {
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f,
        -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
        -3.6f, -1.2f, 1.2f, 3.6f
    };
    public static readonly float[] y =
    {
        8.00f, 8.00f, 8.00f, 8.00f,
        7.14f, 7.14f, 7.14f, 7.14f, 7.14f,
        6.28f, 6.28f, 6.28f, 6.28f,
        5.42f, 5.42f, 5.42f, 5.42f, 5.42f,
        4.56f, 4.56f, 4.56f, 4.56f,
        3.70f, 3.70f, 3.70f, 3.70f, 3.70f,
        2.84f, 2.84f, 2.84f, 2.84f,
        1.98f, 1.98f, 1.98f, 1.98f, 1.98f,
        1.12f, 1.12f, 1.12f, 1.12f,
        0.26f, 0.26f, 0.26f, 0.26f, 0.26f,
        -0.6f, -0.6f, -0.6f, -0.6f
    };
}
