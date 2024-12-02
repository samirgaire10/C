/*
プログラム名:kadai4_02.c
作成日:2024 年 10 月 23 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>
int main(void)
{
	int a, b, w, c;

	printf("aを入力してください＞＞");
	scanf("%d", &a);
	printf("bを入力してください＞＞");
	scanf("%d", &b);
	

	printf("交換前の a の値は %d です \n交換前の b の値は %d です \n\n\n\n\n", a, b);


	w = a;
	a = b;
	b = w;

	printf(" 交換後の a の値は %d です \n 交換後の b の値は %d です \n ", a, b);

	return 0;
}

