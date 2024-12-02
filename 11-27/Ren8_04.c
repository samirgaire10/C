/*
プログラム名:ren8_04.c
作成日:2024 年 11 月 27 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>

int main() {
    int result = 1;


    printf("1 から 5 までのかけ算の累計を表示します。\n");
    for (int i = 1; i <= 5; i++) {
        result *= i; 
    }

    printf("1 から 5 までのかけ算結果は %d です。\n", result);

    return 0;
}
