/*
�v���O������:ren7_01.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/


#include <stdio.h>

int main(void)
{

    int cd, is;
    int a_toku = 0, b_toku = 0;


    printf("CD �Ȃ̓��_:\n");
    scanf("%d", &cd);
    printf("IS�Ȃ̓��_:\n");
    scanf("%d", &is);

    if (cd > is)
    {
        //printf("CD �`�[���̏��_:3 �_ \n IS �`�[���̏��_ : 0 �_\n");
        a_toku = 3;
    }
    else if (cd < is)
    {
        //printf("CD �`�[���̏��_:0 �_ \n IS �`�[���̏��_ : 3 �_\n");
        b_toku = 3;
    }
    else
    {
        //printf("CD �`�[���̏��_:1 �_ \n IS �`�[���̏��_ : 1 �_\n");
        a_toku = 1;
        b_toku = 1;
    }
    printf("CD �`�[���̏��_:%d �_ \n IS �`�[���̏��_ : %d �_\n", a_toku , b_toku);


    return 0;
}
