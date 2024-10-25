#include <stdio.h>

int ShowBigNum(int num1, int num2, int num3);
int ShowSmallNum(int num1, int num2, int num3);

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d, %d, %d", &num1, &num2, &num3);
}

int ShowBigNum(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num1 > num3) ? num1 : num3;

	else
		return (num2 > num3) ? num2 : num3;

}

int ShowSmallNum(int num1, int num2, int num3)
{
	if (num1 < num2)
		return (num1 < num3) ? num1 : num3;

	else
		return (num2 < num3) ? num2 : num3;
}