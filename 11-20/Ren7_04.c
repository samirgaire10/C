/*
プログラム名:kadai7-01.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
	int cust, discnt;
	printf("く顧客種別 >> 1 または 2 を入力\n ");
	printf("1:プレミアム会員 / 2 : 一般会員\n ");
	scanf("%d", &cust);


	if (cust == 1)
	{
		discnt = 10;
	}
	else {
		discnt = 3;
	}
	printf("あなたは%d%%引き価格です", discnt);
	return 0;
}