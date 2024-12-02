/*
プログラム名:sample0604.c
作成日:2024 年 11 月 27 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/


#include<stdio.h>
int main(void)
{
	int num = 0, sum = 0 ,  i;
	printf("整数を入力:");
	scanf("%d", &num);

	for ( i = 1; i <= num ; i++)
	{
		sum += i;
	}
	printf("1~%d までの整数の和は %d。",num , sum);
	return 0;
}

