/*
プログラム名:
作成日:2024 年 11 月 13 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>
int main(void)
{
	int kumi;

	printf("あなたは何組ですか＞＞\n");
	scanf("%d", &kumi);

	if (kumi == 1)
	{
		printf("あなたは%d組です\n", kumi);
		printf("処理を終了します。");
	}
	else
	{
		printf("処理を終了します。");
		return 0;
	}



	return 0;
}