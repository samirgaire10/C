/*
�v���O������:kadai7-03.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
    int num;

    printf("'*'�̐�(0-5):");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf(" ");
        break;

    case 1:
        printf("*");
        break;

    case 2:
        printf("**");
        break;

    case 3:
        printf("***");
        break;

    case 4:
        printf("****");
        break;

    case 5:
        printf("*****");
        break;

    default:
        printf("���͒l���s���ł�");
        break;

    }

    return 0;
}

