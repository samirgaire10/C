/*
�v���O������:ren5_04.c
�쐬��:2024 �N 10 �� 30 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/


#include <stdio.h>
int main(void)
{
	int  goukei = 0 , ninzu ; 

	printf("3 �g�̐l������͂��Ă��������B");
	scanf("%d", &ninzu);
	goukei = goukei + ninzu; 

	printf("4 �g�̐l������͂��Ă��������B");
	scanf("%d", &ninzu);
	
	goukei = goukei + ninzu;

	printf("3 �g�� 4 �g�̊w���͍��v %d�l�ł��B",goukei);
		
	return 0;
}
