/*
�v���O������:kadai5_03.c
�쐬��:2024 �N 10 �� 30 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>

int main(void)
{
    int a, b, d = 0;
    float c = 0;

    printf("a��");
    scanf("%d", &a);

    printf("b��");
    scanf("%d", &b);

    c = (float)a / b;
    printf("a��b �̌��ʂ� %f �ł�\n", c);

    d = a % b;
    printf("a%%b �̌��ʂ� %d �ł�\n", d); 

    return 0;
}
