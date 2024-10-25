#include <stdio.h>

int main(void)
{
	int a, b, c;
	const int NUM_LINE = 10;
	for (a = 0; a < NUM_LINE; a++)
	{
		for (b = a; b < NUM_LINE-1; b++)
			printf(" ");

		for (c = 0; c <= (a * 2); c++) {
			if (c == 0 || c == (a * 2))
				printf("*");
			else printf("_");
		}

		printf("\n");

	}
	return 0;
}