/*
�v���O������:sample0604.c
�쐬��:2024 �N 11 �� 27 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/


#include<stdio.h>
int main(void)
{
	int num = 0, sum = 0 ,  i;
	printf("�����܂ł̍��v���܂Ƃ߂܂���");
	scanf("%d", &num);

	for ( i = 1; i <= num ; i++)
	{
		sum += i;
	}
	printf("1����%d�܂ł̍��v%d�ł��B",num , sum);
	return 0;
}

