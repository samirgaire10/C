/*
プログラム名:kadai8_01.c
作成日:2024 年 11 月 27 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/


#include<stdio.h>
int main(void)
{
	int num , i = 1;

	printf("'*'の数(0 - 5):");
	scanf("%d", &num);
	
	if (num >= 0 && num <= 5) {
		while (i <= num)
		{
			printf("*", i++);
		}
	}
		
	return 0;
}

