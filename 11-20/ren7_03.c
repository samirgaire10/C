/*
プログラム名:ren7_03.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
    float height, age;

    printf("身長は?＞＞\n");
    scanf("%f", &height);

    printf("年齢は?＞＞\n");
    scanf("%f", &age);


    

    if (height < 150 && age < 10)
    {
        printf("乗車できません\n");
    }
    else
    {
        printf("乗車できます\n");
    }

    return 0;
}

