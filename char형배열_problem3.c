#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_problem3(void)
{
	int len = 0;
	char voca[100];
	printf("���ܾ� �Է�: ");
	scanf("%s", voca);

	while (voca[len] != '\0')		// ���ܾ��� ���̸� ���� ���
		len++;

 	printf("���� = %d", len);
	return 0;
}