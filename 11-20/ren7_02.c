/*
プログラム名:ren7_02.c
作成日:2024 年 11 月 20 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include <stdio.h>
int main(void)
{
	char chara;
	printf("abcどれか入力してください");
	scanf("%c",&chara);


	switch (chara)
	{
	case 'a':
		printf("a");
	case 'b':
		printf("b");
	case 'c' :
		printf("c\n");
		break;

	default:
		printf("aかbかcを入力してください。。。。\n");
	}
	return 0;
}
