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
        "stage02",
        "stage03",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear",
        "GameClear"
    };

    // �X�e�[�W���̃N���A�ɕK�v�ȕ�����
    public static readonly int[] clearMojiNum =
    {
        2, 4, 6, 2, 4, 6, 2, 4, 6
    };

    // �X�e�[�W���̃N���A������
    public static readonly int[,] seikaiMoji =
    {
        { 0, 1, 0, 0, 0, 0 },   // �搶
        { 0, 1, 0, 2, 0, 0 },   // ���񂹂�
        { 0, 1, 2, 0, 1, 3 },   // SENSEI
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 2, 0, 0 },
        { 0, 1, 2, 0, 1, 3 },
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 2, 0, 0 },
        { 0, 1, 2, 0, 1, 3 }
    };

    // �X�e�[�W���̕��������m��
    public static readonly int[] mojiProbabirity =
    {
        50, 60, 70, 70, 80, 90, 80, 90, 100
    };

    // �X�e�[�W���̔������镶���퐔
    public static readonly int[] mojiSyurui =
    {
        2, 3, 4, 4, 6, 8, 6, 9, 12
    };

    // �X�e�[�W���̃u���b�N�|�C���g
    public static readonly int[] Point =
    {
        10, 15, 20, 25, 30, 35, 40, 45, 50
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
        7.12f, 7.12f, 7.12f, 7.12f, 7.12f,
        6.24f, 6.24f, 6.24f, 6.24f,
        5.36f, 5.36f, 5.36f, 5.36f, 5.36f,
        4.48f, 4.48f, 4.48f, 4.48f,
        3.60f, 3.60f, 3.60f, 3.60f, 3.60f,
        2.72f, 2.72f, 2.72f, 2.72f,
        1.84f, 1.84f, 1.84f, 1.84f, 1.84f,
        0.96f, 0.96f, 0.96f, 0.96f,
        0.08f, 0.08f, 0.08f, 0.08f, 0.08f,
        -0.8f, -0.8f, -0.8f, -0.8f
    };
}
