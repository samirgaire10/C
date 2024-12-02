/*
プログラム名:ren7_01.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
	int res;
	printf("整数を入力してください");
	scanf("%d", &res);


	switch (res)
	{
	case 1:
		printf("１が入力されました\n");
	case 2:
		printf("2が入力されました\n");
	default:
		printf("１か２を入力してください。。。。\n");
	}
	return 0;
}
