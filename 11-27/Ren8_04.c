/*
�v���O������:ren8_04.c
�쐬��:2024 �N 11 �� 27 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>

int main() {
    int result = 1;


    printf("1 ���� 5 �܂ł̂����Z�̗݌v��\�����܂��B\n");
    for (int i = 1; i <= 5; i++) {
        result *= i; 
    }

    printf("1 ���� 5 �܂ł̂����Z���ʂ� %d �ł��B\n", result);

    return 0;
}
