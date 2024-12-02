/*
プログラム名:kadai7-04.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
    int num;

    printf("スコアを入力:");
    scanf("%d", &num);
    


    switch (num/10)
    {
    case 10:
        printf("おおいに優秀");
        break;

    case 9:
    case 8:
        printf("期待以上");
        break;

    case 7:
    case 6:
        printf("合格");
        break;

    case 5:
        printf("努力を要す");
        break;

    default:
        printf("再トライすべし");
        break;

    }

    return 0;
}

