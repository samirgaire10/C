/*
�v���O������:kadai8_01.c
�쐬��:2024 �N 11 �� 27 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/


#include<stdio.h>
int main(void)
{
	int num , i = 1;

	printf("'*'�̐�(0 - 5):");
	scanf("%d", &num);
	
	if (num >= 0 && num <= 5) {
		while (i <= num)
		{
			printf("*", i++);
		}
	}
		
	return 0;
}

