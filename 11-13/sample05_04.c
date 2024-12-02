/*
プログラム名:sample0504.c
作成日:2024 年 11 月 13 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>
int main(void)
{
	int res;

	printf("整数を入力してください＞＞\n");
	scanf("%d", &res);

	if (res == 1)
	{
		printf("1が入力されました");
	}
	else if (res == 2)
	{
		printf("２が入力されました");
	}
	else
	{
		printf("1か２をが入力してください");
	}

	return 0;
}