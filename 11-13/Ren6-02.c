/*
プログラム名:
作成日:2024 年 11 月 13 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>
int main(void)
{
	int ninzu = 0, ten, goukei = 0;
	float  heikin;

	ninzu = ninzu + 1;
	printf("%d人目の点数＞＞\n", ninzu);
	scanf("%d", &ten);
	goukei = goukei + ten;


	ninzu = ninzu + 1;
	printf("%d人目の点数＞＞\n", ninzu);
	scanf("%d", &ten);
	goukei = goukei + ten;

	heikin = (float)goukei / ninzu;
	printf("%d 人の平均点数: %f 点", ninzu, heikin);


	return 0;
}