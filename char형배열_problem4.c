#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_problem4(void)
{
	int len = 0, i;
	char voca[100], temp;

	printf("���ܾ� �Է�: ");
	scanf("%s", voca);

	while (voca[len] != '\0') {		// != �Ű澲��!!
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = voca[i];
		voca[i] = voca[len - 1 - i];
		voca[len - 1 - i] = temp;
	}
	printf("\n");

	printf("������ ���ܾ�: %s \n", voca);

	return 0;
}