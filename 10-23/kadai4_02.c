/*
�v���O������:kadai4_02.c
�쐬��:2024 �N 10 �� 23 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include<stdio.h>
int main(void)
{
	int a, b, w, c;

	printf("a����͂��Ă�����������");
	scanf("%d", &a);
	printf("b����͂��Ă�����������");
	scanf("%d", &b);
	

	printf("�����O�� a �̒l�� %d �ł� \n�����O�� b �̒l�� %d �ł� \n\n\n\n\n", a, b);


	w = a;
	a = b;
	b = w;

	printf(" ������� a �̒l�� %d �ł� \n ������� b �̒l�� %d �ł� \n ", a, b);

	return 0;
}

