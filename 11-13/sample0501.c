/*
プログラム名:sample0501
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
		printf("１が入力されました\n");
	}
	else
	{
		printf("処理を終了します。");
		return 0;
	}



	return 0;
}