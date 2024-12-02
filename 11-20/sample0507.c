/*
プログラム名:kadai7-01.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
	int res, ans;
	printf("何番目を選びますか？\n ");
	printf("整数を入力してください\n ");
	scanf("%d", &res);


	/*if (res == 1)
	{
		ans= 'A';
	}
	else {
		ans  = 'B';
	}*/

	ans = (res == 1) ? 'A' : 'B';
	printf("%cコースを選択しました。\n", ans);
	return 0;
}