#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_concept5(void)
{
	int arr1[2][3][4];
	double arr2[5][5][5];

	printf("����2, ����3, ����4 int�� �迭: %d \n", sizeof(arr1));
	printf("����5, ����5, ����5 double�� �迭: %d \n", sizeof(arr2));

	return 0;
}

int main_concept5_1(void)
{
	int mean = 0, i, j;
	int record[3][3][3] = {
		{
			{70,80},
			{94,90},
			{70,85}
		},
		{
			{83,90},
			{95,60},
			{90,82}
		},
		{
			{98,89},
			{99,94},
			{91,87}
		}
	};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[0][i][j];

	printf("A�б� ��ü ���: %g \n", (double)mean / 6);

	mean = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[1][i][j];

	printf("B�б� ��ü ���: %g \n", (double)mean / 6);

	mean = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][i][j];

	printf("C�б� ��ü ���: %g \n", (double)mean / 6);

	return 0;
}