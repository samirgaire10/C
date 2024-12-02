/*
プログラム名:kadai5_03.c
作成日:2024 年 10 月 30 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>

int main(void)
{
    int a, b, d = 0;
    float c = 0;

    printf("aは");
    scanf("%d", &a);

    printf("bは");
    scanf("%d", &b);

    c = (float)a / b;
    printf("a÷b の結果は %f です\n", c);

    d = a % b;
    printf("a%%b の結果は %d です\n", d); 

    return 0;
}
