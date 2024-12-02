/*
プログラム名:kadai7-04.c
作成日:2024 年 11 月 27 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/


#include<stdio.h>
int main(void)
{

	int num , i = 0;
	printf("何回繰り返しますか:>>");
	scanf("%d", &num);

	while (i <= num) {
		printf("繰返し %d 回目!\n", i);
		i++;
	}
	return 0;
}

