/*
プログラム名:ren5_05.c
作成日:2024 年 10 月 30 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>

int main(void)
{
   
    double moto;
    int kirisute;

    printf("小数を入力してください>");
    scanf("%lf",&moto);
       
    kirisute = moto;
    //c = (float)a / b;

    
    printf("切り捨てすると %d になります。",kirisute );

    return 0;
}
