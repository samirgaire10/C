/*
プログラム名:kadai4_03.c
作成日:2024 年 10 月 23 日
作成者:CD68-４ 組 k023c2019 ガイレサミル
*/

#include<stdio.h>
int main(void)
{
	int a , b, w ,c ;

	printf("aを入力してください＞＞");
	scanf("%d",&a);
	printf("bを入力してください＞＞");
	scanf("%d",&b);
	printf("wを入力してください＞＞");
	scanf("%d",&c);

	printf("交換前の a の値は %d です \n交換前の b の値は %d です \n 交換前の c の値は %d です\n\n\n\n\n",a,b,c);
	
	
	w = a;
	a = b; 
	b = c;
	c = w;

	printf(" 交換後の a の値は %d です \n 交換後の b の値は %d です \n交換後の c の値は %d です \n ",a,b,c);

	return 0;
}

