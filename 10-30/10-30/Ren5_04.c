/*
プログラム名:ren5_04.c
作成日:2024 年 10 月 30 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/


#include <stdio.h>
int main(void)
{
	int  goukei = 0 , ninzu ; 

	printf("3 組の人数を入力してください。");
	scanf("%d", &ninzu);
	goukei = goukei + ninzu; 

	printf("4 組の人数を入力してください。");
	scanf("%d", &ninzu);
	
	goukei = goukei + ninzu;

	printf("3 組と 4 組の学生は合計 %d人です。",goukei);
		
	return 0;
}
