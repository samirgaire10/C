/*
プログラム名:kadai5_01.c
作成日:2024 年 10 月 30 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/


#include <stdio.h>
int main(void)
{
	int a, b, c, d , e, w = 0;
	printf("aは");
	scanf("%d", &a);

	printf("bは");
	scanf("%d", &b);

	printf("cは");
	scanf("%d", &c);

	printf("dは");
	scanf("%d", &d);

	printf("eは");
	scanf("%d", &e);


	w = b * c;
	w = w / d;
	w = a + w;
	w = w - e;

	printf("a+b×c÷d-e の結果は%d です",w);




	return 0;
}
