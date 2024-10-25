#include <stdio.h>
int main(void)
{
	double kil = 0.0;
	double result = 0.0;

	printf("Please enter kilometer: ");
	scanf_s("%lf", &kil);

	result = (double)kil / (double)1.609;

	printf("%.1f km is equal to %.1f miles.", kil, result);

	return 0;


}