/*
プログラム名:kadai7-03.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
    int num;

    printf("'*'の数(0-5):");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf(" ");
        break;

    case 1:
        printf("*");
        break;

    case 2:
        printf("**");
        break;

    case 3:
        printf("***");
        break;

    case 4:
        printf("****");
        break;

    case 5:
        printf("*****");
        break;

    default:
        printf("入力値が不正です");
        break;

    }

    return 0;
}

