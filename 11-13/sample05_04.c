/*
�v���O������:sample0504.c
�쐬��:2024 �N 11 �� 13 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include<stdio.h>
int main(void)
{
	int res;

	printf("��������͂��Ă�����������\n");
	scanf("%d", &res);

	if (res == 1)
	{
		printf("1�����͂���܂���");
	}
	else if (res == 2)
	{
		printf("�Q�����͂���܂���");
	}
	else
	{
		printf("1���Q�������͂��Ă�������");
	}

	return 0;
}