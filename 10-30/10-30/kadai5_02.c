/*
�v���O������:kadai5_01.c
�쐬��:2024 �N 10 �� 30 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/


#include <stdio.h>
int main(void)
{
	int a, b, c, d , e, w = 0;
	printf("a��");
	scanf("%d", &a);

	printf("b��");
	scanf("%d", &b);

	printf("c��");
	scanf("%d", &c);

	printf("d��");
	scanf("%d", &d);

	printf("e��");
	scanf("%d", &e);


	w = b * c;
	w = w / d;
	w = a + w;
	w = w - e;

	printf("a+b�~c��d-e �̌��ʂ�%d �ł�",w);




	return 0;
}
