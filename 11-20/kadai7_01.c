/*
プログラム名:kadai7-01.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
    float num1, num2 , ans = 0 ;
    char sym;

    printf("x 演算子 y の順に入力:");
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
        printf("演算子が違います");
        break;
    }
    printf("%.0f %c %.0f= %.0f\n", num1, sym, num2, ans);

    return 0;
}

