#include <stdio.h>
#include <math.h>

int main(void)
{
	int num1, num2;
	printf("�� ���� �Է� ");
	scanf_s("%d %d", &num1, &num2);


	printf("pow(%d, %d)= %d", num1, num2, (int)pow(num1, num2));

	return 0;
}