/*
プログラム名:kadai6_01
作成日:2024 年 11 月 13 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>
int main(void)
{
	int res;

	printf("整数を入力してください＞＞\n");
	scanf("%d", &res);
	
	if (res%2 == 0)
	{
		printf("偶数\n");
	}
	else
	{
		printf("奇数");
	}



	return 0;
}