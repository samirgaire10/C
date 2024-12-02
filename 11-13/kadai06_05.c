/*
プログラム名:ren06_03.c
作成日:2024 年 11 月 13 日
作成者:CD68-4 組 k023c2019 ガイレサミル
*/

#include <stdio.h>

int main(void)
{

    int a , b;
    printf("A 君のスコア:\n");
    scanf("%d", &a);
    printf("B 君のスコア:\n");
    scanf("%d", &b);
   
    if (a > b)
    {
        printf("A 君の方がハイスコア\n");
    }
    else if (a < b)
    {
        printf("B 君の方がハイスコア\n");
    }
    else
        printf("2 人は同点");


    return 0;
}
