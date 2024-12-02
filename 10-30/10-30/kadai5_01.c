/*
プログラム名:kadai5_01.c
作成日:2024 年 10 月 30 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/


#include <stdio.h>
int main(void)
{
	int a, b, c, w = 0;
	printf("aは");
	scanf("%d", &a);

	printf("bは");
	scanf("%d", &b);

	printf("cは");
	scanf("%d", &c);

	w = b * c;
	w = a - w;
	printf("a-b×c の結果は%d です",w);




	return 0;
}
