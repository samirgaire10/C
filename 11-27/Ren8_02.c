/*
�v���O������:kadai7-04.c
�쐬��:2024 �N 11 �� 27 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/


#include<stdio.h>
int main(void)
{

	int num, i = 1;
	printf("1 ���琔���܂��B\n�����܂Ő����܂��� ? >");
	scanf("%d", &num);

	do
	{
		printf("%d\n", i);
		i++;
	} while (i <= num);

	return 0;
}

