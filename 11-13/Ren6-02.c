/*
�v���O������:
�쐬��:2024 �N 11 �� 13 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include<stdio.h>
int main(void)
{
	int ninzu = 0, ten, goukei = 0;
	float  heikin;

	ninzu = ninzu + 1;
	printf("%d�l�ڂ̓_������\n", ninzu);
	scanf("%d", &ten);
	goukei = goukei + ten;


	ninzu = ninzu + 1;
	printf("%d�l�ڂ̓_������\n", ninzu);
	scanf("%d", &ten);
	goukei = goukei + ten;

	heikin = (float)goukei / ninzu;
	printf("%d �l�̕��ϓ_��: %f �_", ninzu, heikin);


	return 0;
}