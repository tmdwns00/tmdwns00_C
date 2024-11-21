#include <stdio.h>
#include <math.h>

double CalculateStddev(double arr[], int size)
{
	double sum = 0.0, stddev = 0.0;
	int i, mean;

	for (i = 0; i < size; i++) {
		sum += arr[i];
	}
	mean = sum / size;

	for (i = 0; i < size; i++) {
		stddev += pow(arr[i] - mean, 2);
	}
	return sqrt(stddev / size);
}

int main(void)
{
	double numbers[4];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%lf", &numbers[i]);
	}

	double stddev = CalculateStddev(numbers, 5);
	printf("Standard Deviation = %.3f \n", stddev);

	return 0;
}