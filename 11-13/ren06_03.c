/*
�v���O������:ren06_03.c
�쐬��:2024 �N 11 �� 13 ��
�쐬��:CD68-4 �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>

int main(void)
{

    int seikai_kumi = 4 , in_kumi;

    printf("��񏈗��� 2 �N���̑g���N�C�Y!\n");
    printf("���g����Ǝv���܂���?���������\n");
    scanf("%d", &in_kumi);

    if (in_kumi == seikai_kumi)
    {
        printf("����!2 �N���� 4 �N���X�ł��B");
    }
    else
    {
        printf("�c�O!%d �N���X�ł͂���܂���B\n������ 4 �N���X�ł��B",in_kumi);
    }


    return 0;
}
