/*
プログラム名:kadai8_02.c
作成日:2024 年 11 月 27 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/


#include<stdio.h>
int main(void)
{
	int num ;

	printf("整数を入力:");
	scanf("%d", &num);
	
	//if (num >= 0) {
		while (num > 0)
		{
			printf("%d\n", num--);
		}
	//}
		
	return 0;
}

