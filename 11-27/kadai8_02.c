/*
�v���O������:kadai8_02.c
�쐬��:2024 �N 11 �� 27 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/


#include<stdio.h>
int main(void)
{
	int num ;

	printf("���������:");
	scanf("%d", &num);
	
	//if (num >= 0) {
		while (num > 0)
		{
			printf("%d\n", num--);
		}
	//}
		
	return 0;
}

