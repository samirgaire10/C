/*
プログラム名:ren5_01.c
作成日:2024 年 10 月 30 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>

int main(void)
{
    int a;
    float b;

    printf("整数を入力してください > \n");
    scanf("%d", &a);
    printf("入力された整数は %d です。\n", a);

    printf("小数を入力してください > ");
    scanf("%f", &b);
    printf("入力された小数は %.1f です。\n", b);
    printf("入力された小数は %f です。\n", b);

    return 0;
}
