/*
�v���O������:kadai6_04
�쐬��:2024 �N 11 �� 13 ��
�쐬��:CD68-4 �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>

int main(void)
{
    int height, age;

    printf("�g����?����\n");
    scanf("%d", &height);

    printf("�N���?����\n");
    scanf("%d", &age);

    if (height < 150)
    {
        if (age > 10)
        {
            printf("�ی�ғ����ŏ�Ԃł��܂�\n");
        }
        else
        {
            printf("��Ԃł��܂���\n");
        }
    }
    else
    {
        printf("��Ԃł��܂�\n");
    }

    return 0;
}
