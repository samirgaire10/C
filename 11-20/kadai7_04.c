/*
�v���O������:kadai7-04.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
    int num;

    printf("�X�R�A�����:");
    scanf("%d", &num);
    


    switch (num/10)
    {
    case 10:
        printf("�������ɗD�G");
        break;

    case 9:
    case 8:
        printf("���҈ȏ�");
        break;

    case 7:
    case 6:
        printf("���i");
        break;

    case 5:
        printf("�w�͂�v��");
        break;

    default:
        printf("�ăg���C���ׂ�");
        break;

    }

    return 0;
}

