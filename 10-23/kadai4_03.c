/*
�v���O������:kadai4_03.c
�쐬��:2024 �N 10 �� 23 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include<stdio.h>
int main(void)
{
	int a , b, w ,c ;

	printf("a����͂��Ă�����������");
	scanf("%d",&a);
	printf("b����͂��Ă�����������");
	scanf("%d",&b);
	printf("w����͂��Ă�����������");
	scanf("%d",&c);

	printf("�����O�� a �̒l�� %d �ł� \n�����O�� b �̒l�� %d �ł� \n �����O�� c �̒l�� %d �ł�\n\n\n\n\n",a,b,c);
	
	
	w = a;
	a = b; 
	b = c;
	c = w;

	printf(" ������� a �̒l�� %d �ł� \n ������� b �̒l�� %d �ł� \n������� c �̒l�� %d �ł� \n ",a,b,c);

	return 0;
}

