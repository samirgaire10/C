/*
�v���O������:ren06_03.c
�쐬��:2024 �N 11 �� 13 ��
�쐬��:CD68-4 �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>

int main(void)
{

    int a , b;
    printf("A �N�̃X�R�A:\n");
    scanf("%d", &a);
    printf("B �N�̃X�R�A:\n");
    scanf("%d", &b);
   
    if (a > b)
    {
        printf("A �N�̕����n�C�X�R�A\n");
    }
    else if (a < b)
    {
        printf("B �N�̕����n�C�X�R�A\n");
    }
    else
        printf("2 �l�͓��_");


    return 0;
}
