/*
�v���O������:
�쐬��:2024 �N 11 �� 13 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include<stdio.h>
int main(void)
{
	int ten;
	char hyouka;

	printf("�_������͂��Ă�����������\n");
	scanf("%d", &ten);

	if (ten >= 80)
	{
		hyouka = 'A';
		//printf("���Ȃ��� A �]���ł��B");
	}
	else if (ten >= 70)
	{
		hyouka = 'B';
		//printf("���Ȃ��� B �]���ł��B");
	}
	else if (ten >= 60)
	{
		hyouka = 'C';
		//printf("���Ȃ��� C �]���ł��B");
	}
	else
	{
		hyouka = 'D';
		//printf("���Ȃ��� D �]���ł��B");
	}

	printf("���Ȃ���%c�]���ł��B\n",hyouka);

	return 0;
}