#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int arr[5], i;
	int odd[5];
	int even[5];
	int oddcount = 0, evencount = 0;

	printf("Please input five integers: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0)
			even[evencount++] = arr[i];
		else
			odd[oddcount++] = arr[i];
	}

	printf("Odd numbers: ");
	for (i = 0; i < oddcount; i++)
		printf("%d ", odd[i]);
	printf("\n");
	printf("Even numbers: ");
	for (i = 0; i < evencount; i++)
		printf("%d ", even[i]);

	return 0;

}