/*
�v���O������:kadai7-01.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
	int res, ans;
	printf("���Ԗڂ�I�т܂����H\n ");
	printf("��������͂��Ă�������\n ");
	scanf("%d", &res);


	/*if (res == 1)
	{
		ans= 'A';
	}
	else {
		ans  = 'B';
	}*/

	ans = (res == 1) ? 'A' : 'B';
	printf("%c�R�[�X��I�����܂����B\n", ans);
	return 0;
}