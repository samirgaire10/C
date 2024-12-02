/*
プログラム名:kadai7-04.c
作成日:2024 年 11 月 27 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/


#include<stdio.h>
int main(void)
{

	int num, i = 1;
	printf("1 から数えます。\nいくつまで数えますか ? >");
	scanf("%d", &num);

	do
	{
		printf("%d\n", i);
		i++;
	} while (i <= num);

	return 0;
}

