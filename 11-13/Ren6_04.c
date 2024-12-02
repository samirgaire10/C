/*
プログラム名:
作成日:2024 年 11 月 13 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>
int main(void)
{
	int ten;
	char hyouka;

	printf("点数を入力してください＞＞\n");
	scanf("%d", &ten);

	if (ten >= 80)
	{
		hyouka = 'A';
		//printf("あなたは A 評価です。");
	}
	else if (ten >= 70)
	{
		hyouka = 'B';
		//printf("あなたは B 評価です。");
	}
	else if (ten >= 60)
	{
		hyouka = 'C';
		//printf("あなたは C 評価です。");
	}
	else
	{
		hyouka = 'D';
		//printf("あなたは D 評価です。");
	}

	printf("あなたは%c評価です。\n",hyouka);

	return 0;
}