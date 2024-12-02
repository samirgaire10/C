/*
プログラム名:kadai6_04
作成日:2024 年 11 月 13 日
作成者:CD68-4 組 k023c2019 ガイレサミル
*/

#include <stdio.h>

int main(void)
{
    int height, age;

    printf("身長は?＞＞\n");
    scanf("%d", &height);

    printf("年齢は?＞＞\n");
    scanf("%d", &age);

    if (height < 150)
    {
        if (age > 10)
        {
            printf("保護者同伴で乗車できます\n");
        }
        else
        {
            printf("乗車できません\n");
        }
    }
    else
    {
        printf("乗車できます\n");
    }

    return 0;
}
