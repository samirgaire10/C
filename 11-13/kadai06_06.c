/*
�v���O������:ren06_03.c
�쐬��:2024 �N 11 �� 13 ��
�쐬��:CD68-4 �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>

int main(void)
{

    int a, b;
    printf("A �`�[���̓��_:\n");
    scanf("%d", &a);
    printf("B�`�[���̓��_:\n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A �`�[���̏��_:3 �_ \n B �`�[���̏��_ : 0 �_\n");
    }
    else if (a < b)
    {
        printf("A �`�[���̏��_:0 �_ \n B �`�[���̏��_ : 3 �_\n");
    }
    else
        printf("A �`�[���̏��_:1 �_ \n B �`�[���̏��_ : 1 �_\n");



    return 0;
}
