#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_conceptcheck(void)
{
	int i;
	int arr[50];

	printf("Please input five integers: ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("\n");

	printf("Odd numbers: ");
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}

	printf("\n");

	printf("Even numbers: ");
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}

	printf("\n");

	return 0;
}