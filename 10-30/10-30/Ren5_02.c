/*
プログラム名:ren5_02.c
作成日:2024 年 10 月 30 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>

int main(void)
{
    int a1,a2,a3,a4;

    printf("CD68 - 1 組の人数を入力してください >   \n");
    scanf("%d", &a1);

    printf("CD68 - 2 組の人数を入力してください >   \n");
    scanf("%d", &a2);

    printf("CD68 - 3 組の人数を入力してください >   \n");
    scanf("%d", &a3);

    printf("CD68 - 4 組の人数を入力してください >   \n");
    scanf("%d", &a4);
  
    printf("4 クラスの合計は %d 人です。", a1 + a2 + a3 + a4);

    return 0;
}
