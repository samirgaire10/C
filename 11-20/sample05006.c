/*
�v���O������:sample0506.c
�쐬��:2024 �N 11 �� 20 ��
�쐬��:CD68-�S �g k023c2019 �K�C���T�~��
*/

#include <stdio.h>
int main(void)
{
    char res;

    printf("���Ȃ��͒j���ł���\n");
    printf("Y�܂��͂m����͂��Ă�������\n");
    res = getchar();

    if (res == 'y' || res == 'Y')
    {
        printf("���Ȃ��͒j���ł���!!\n");
    }
    else if (res == 'n' || res == 'N')
    {
        printf("���Ȃ��͏����ł���!!\n");
    }
    else
    {
        printf("�x���m����͂��Ă�������!!\n");
    }
    return 0;
}

