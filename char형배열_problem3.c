#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_problem3(void)
{
	int len = 0;
	char voca[100];
	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != '\0')		// 영단어의 길이를 세는 방법
		len++;

 	printf("길이 = %d", len);
	return 0;
}