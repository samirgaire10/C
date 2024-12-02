/*
プログラム名:ren06_03.c
作成日:2024 年 11 月 13 日
作成者:CD68-4 組 k023c2019 ガイレサミル
*/

#include <stdio.h>

int main(void)
{

    int seikai_kumi = 4 , in_kumi;

    printf("情報処理科 2 年次の組数クイズ!\n");
    printf("何組あると思いますか?整数を入力\n");
    scanf("%d", &in_kumi);

    if (in_kumi == seikai_kumi)
    {
        printf("正解!2 年次は 4 クラスです。");
    }
    else
    {
        printf("残念!%d クラスではありません。\n正解は 4 クラスです。",in_kumi);
    }


    return 0;
}
