/*
�v���O������:ren7_02.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
	char chara;
	printf("abc�ǂꂩ���͂��Ă�������");
	scanf("%c",&chara);


	switch (chara)
	{
	case 'a':
		printf("a");
	case 'b':
		printf("b");
	case 'c' :
		printf("c\n");
		break;

	default:
		printf("a��b��c����͂��Ă��������B�B�B�B\n");
	}
	return 0;
}
