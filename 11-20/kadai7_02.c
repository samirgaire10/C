/*
�v���O������:kadai7-04.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
    char key;
    int  turn;

    printf("�L�[����:");
    scanf("%c", &key);

    printf("�L�[�L���E����(1/0):");
    scanf("%d", &turn);

    if (turn != 0)
    {
        switch (key)
        {
        case '4':
            printf("���Ɉړ�");
            break;

        case '6':
            printf("�E�Ɉړ�");
            break;

        case '5':
            printf("�U��");
            break;

        case '8':
            printf("�W�����v");
            break;

        case '2':
            printf("���Ⴊ��");
            break;

        case '7':
            printf("�����ō��Ɉړ�");
            break;

        case '9':
            printf("�����ŉE�Ɉړ�");
            break;

        case '1':
            printf("���Ŗh��");
            break;

        case '3':
            printf("�n�C�p���[���[�h");
            break;

        default:
            printf("������L�[");
            break;

        }
    }
    else
        printf("�L�[�������[�h��");



    /*�e4�f ���Ɉړ�
        �e6�f �E�Ɉړ�
        �e5�f �U��
        �e8�f �W�����v
        �e2�f ���Ⴊ��
        �e7�f �����ō��Ɉړ�
        �e9�f �����ŉE�Ɉړ�
        �e1�f ���Ŗh��
        �e3�f �n�C�p���[���[�h
        ���̑� ������L�[*/
    return 0;
}

