/*
�v���O������:ren7_01.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
	int res ;
	printf("��������͂��Ă�������");
	scanf("%d", &res);

	
	switch (res)
	{
		case 1:
			printf("�P�����͂���܂���\n");
			break;
		
		case 2:
			printf("2�����͂���܂���\n");
			break;

		default:
			printf("�P���Q����͂��Ă��������B�B�B�B\n");
			break;
	}
	return 0;
}
