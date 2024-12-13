#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_problem4(void)
{
	int len = 0, i;
	char voca[100], temp;

	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != '\0') {		// != 신경쓰기!!
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = voca[i];
		voca[i] = voca[len - 1 - i];
		voca[len - 1 - i] = temp;
	}
	printf("\n");

	printf("뒤집힌 영단어: %s \n", voca);

	return 0;
}