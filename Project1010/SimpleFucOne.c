#include <stdio.h>

int main(void)
{
	printf("2의 1승은 %d 입니다. \n", squaretwo(1));
	printf("2의 2승은 %d 입니다. \n", squaretwo(2));
	printf("2의 3승은 %d 입니다. \n", squaretwo(3));
	printf("2의 4승은 %d 입니다. \n", squaretwo(4));
	printf("2의 5승은 %d 입니다. \n", squaretwo(5));

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
	printf("2의 1승은 %d 입니다. \n", squaretwo(1));
	printf("2의 2승은 %d 입니다. \n", squaretwo(2));
	printf("2의 3승은 %d 입니다. \n", squaretwo(3));
	printf("2의 4승은 %d 입니다. \n", squaretwo(4));
	printf("2의 5승은 %d 입니다. \n", squaretwo(5));

	return 0;
}

*/
