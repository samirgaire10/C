/*
�v���O������:kadai7-01.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
    float num1, num2 , ans = 0 ;
    char sym;

    printf("x ���Z�q y �̏��ɓ���:");
    scanf("%f%c%f", &num1, &sym, &num2);

    switch (sym)
    {
    case '+':
        ans = num1 + num2;
        break;

    case '-':
        ans = num1 - num2;
        break;

    case '*':
        ans = num1 * num2;
        break;

    case '/':
        ans = num1 / num2;
        break;

    default:
        printf("���Z�q���Ⴂ�܂�");
        break;
    }
    printf("%.0f %c %.0f= %.0f\n", num1, sym, num2, ans);

    return 0;
}

