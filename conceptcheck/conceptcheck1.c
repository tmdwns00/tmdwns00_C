#include <stdio.h>
#include <math.h>

int main(void)
{
	int num1, num2;
	printf("두 정수 입력 ");
	scanf_s("%d %d", &num1, &num2);


	printf("pow(%d, %d)= %d", num1, num2, (int)pow(num1, num2));

	return 0;
}