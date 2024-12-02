/*
プログラム名:sample0506.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
    char res;

    printf("あなたは男性ですか\n");
    printf("YまたはＮを入力してください\n");
    res = getchar();

    if (res == 'y' || res == 'Y')
    {
        printf("あなたは男性ですね!!\n");
    }
    else if (res == 'n' || res == 'N')
    {
        printf("あなたは女性ですね!!\n");
    }
    else
    {
        printf("ＹかＮを入力してください!!\n");
    }
    return 0;
}

