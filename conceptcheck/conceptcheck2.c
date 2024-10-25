#include <stdio.h>

int main(void)
{
	double km;
	printf("Please enter kilometer: ");
	scanf_s("%lf", &km);


	printf("%.lf km is equal to %.lf miles", km, km / 1.609);
	return 0;
}