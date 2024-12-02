/*
プログラム名:kadai6_03
作成日:2024 年 11 月 13 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>
int main(void)
{
	int score;

	printf("整数を入力してください＞＞\n");
	scanf("%d", &score);

	if (score >= 250)
	{
		printf("優秀");
	}

	else if (score >= 200 )
	{
		printf("期待以上");
	}

	else if (score >= 180)
	{
		printf("まあまあ");
	}
	else if (score >= 150)
	{
		printf("普通");
	}
	else 
	{
		printf("やり直し");
	}
	return 0;
}