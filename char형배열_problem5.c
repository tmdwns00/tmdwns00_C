#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_problem5(void)
{
	int len = 0;
	char voca[100];
	char max;
	int i;

	printf("���ܾ� �Է�:");
	scanf("%s", voca);

	while (voca[len] != '\0')
		len++;

	max = voca[0];

	for (i = 1; i < len; i++) {
		if (max < voca[i])
			max = voca[i];
	}

	printf("%c", max);
}