/*
プログラム名:ren7_01.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/


#include <stdio.h>

int main(void)
{

    int cd, is;
    int a_toku = 0, b_toku = 0;


    printf("CD 科の得点:\n");
    scanf("%d", &cd);
    printf("IS科の得点:\n");
    scanf("%d", &is);

    if (cd > is)
    {
        //printf("CD チームの勝点:3 点 \n IS チームの勝点 : 0 点\n");
        a_toku = 3;
    }
    else if (cd < is)
    {
        //printf("CD チームの勝点:0 点 \n IS チームの勝点 : 3 点\n");
        b_toku = 3;
    }
    else
    {
        //printf("CD チームの勝点:1 点 \n IS チームの勝点 : 1 点\n");
        a_toku = 1;
        b_toku = 1;
    }
    printf("CD チームの勝点:%d 点 \n IS チームの勝点 : %d 点\n", a_toku , b_toku);


    return 0;
}
