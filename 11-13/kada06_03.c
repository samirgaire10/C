/*
�v���O������:kadai6_03
�쐬��:2024 �N 11 �� 13 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include<stdio.h>
int main(void)
{
	int score;

	printf("��������͂��Ă�����������\n");
	scanf("%d", &score);

	if (score >= 250)
	{
		printf("�D�G");
	}

	else if (score >= 200 )
	{
		printf("���҈ȏ�");
	}

	else if (score >= 180)
	{
		printf("�܂��܂�");
	}
	else if (score >= 150)
	{
		printf("����");
	}
	else 
	{
		printf("��蒼��");
	}
	return 0;
}