/*
�v���O������:kadai7-01.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
	int cust, discnt;
	printf("���ڋq��� >> 1 �܂��� 2 �����\n ");
	printf("1:�v���~�A����� / 2 : ��ʉ��\n ");
	scanf("%d", &cust);


	if (cust == 1)
	{
		discnt = 10;
	}
	else {
		discnt = 3;
	}
	printf("���Ȃ���%d%%�������i�ł�", discnt);
	return 0;
}