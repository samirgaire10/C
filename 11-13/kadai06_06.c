/*
プログラム名:ren06_03.c
作成日:2024 年 11 月 13 日
作成者:CD68-4 組 k023c2019 ガイレサミル
*/

#include <stdio.h>

int main(void)
{

    int a, b;
    printf("A チームの得点:\n");
    scanf("%d", &a);
    printf("Bチームの得点:\n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A チームの勝点:3 点 \n B チームの勝点 : 0 点\n");
    }
    else if (a < b)
    {
        printf("A チームの勝点:0 点 \n B チームの勝点 : 3 点\n");
    }
    else
        printf("A チームの勝点:1 点 \n B チームの勝点 : 1 点\n");



    return 0;
}
