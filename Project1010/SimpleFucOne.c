#include <stdio.h>

int main(void)
{
	printf("2�� 1���� %d �Դϴ�. \n", squaretwo(1));
	printf("2�� 2���� %d �Դϴ�. \n", squaretwo(2));
	printf("2�� 3���� %d �Դϴ�. \n", squaretwo(3));
	printf("2�� 4���� %d �Դϴ�. \n", squaretwo(4));
	printf("2�� 5���� %d �Դϴ�. \n", squaretwo(5));

	return 0;
}

int solve(int a)
{
	int i;
	int result = 1;

	for (i = 1; i <= a; i++)
		result *= 2;
	return result;
}

#include <stdio.h>
/*

int squaretwo(int n)
{
	if (n == 0)
		return 1;
	else
		return 2 * squaretwo(n - 1);
}

int main(void)
{
	printf("2�� 1���� %d �Դϴ�. \n", squaretwo(1));
	printf("2�� 2���� %d �Դϴ�. \n", squaretwo(2));
	printf("2�� 3���� %d �Դϴ�. \n", squaretwo(3));
	printf("2�� 4���� %d �Դϴ�. \n", squaretwo(4));
	printf("2�� 5���� %d �Դϴ�. \n", squaretwo(5));

	return 0;
}

*/
