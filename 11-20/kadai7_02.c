/*
プログラム名:kadai7-04.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
    char key;
    int  turn;

    printf("キー入力:");
    scanf("%c", &key);

    printf("キー有効・無効(1/0):");
    scanf("%d", &turn);

    if (turn != 0)
    {
        switch (key)
        {
        case '4':
            printf("左に移動");
            break;

        case '6':
            printf("右に移動");
            break;

        case '5':
            printf("攻撃");
            break;

        case '8':
            printf("ジャンプ");
            break;

        case '2':
            printf("しゃがむ");
            break;

        case '7':
            printf("高速で左に移動");
            break;

        case '9':
            printf("高速で右に移動");
            break;

        case '1':
            printf("盾で防御");
            break;

        case '3':
            printf("ハイパワーモード");
            break;

        default:
            printf("誤ったキー");
            break;

        }
    }
    else
        printf("キー無効モード中");



    /*‘4’ 左に移動
        ‘6’ 右に移動
        ‘5’ 攻撃
        ‘8’ ジャンプ
        ‘2’ しゃがむ
        ‘7’ 高速で左に移動
        ‘9’ 高速で右に移動
        ‘1’ 盾で防御
        ‘3’ ハイパワーモード
        その他 誤ったキー*/
    return 0;
}

