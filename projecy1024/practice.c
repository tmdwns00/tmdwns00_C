#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 1;

	while (pow(a, 4) <= 10000) {
		a++;
	}
	

	printf("%d", a);
	
	return 0;


}