/*
�v���O������:ren7_03.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
    float height, age;

    printf("�g����?����\n");
    scanf("%f", &height);

    printf("�N���?����\n");
    scanf("%f", &age);


    

    if (height < 150 && age < 10)
    {
        printf("��Ԃł��܂���\n");
    }
    else
    {
        printf("��Ԃł��܂�\n");
    }

    return 0;
}

