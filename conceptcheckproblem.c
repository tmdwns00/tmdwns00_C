#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 홀수, 짝수 구분하기 (9주차 배열)

int main_array(void)
{
	int i;
	int arr[50];

	printf("Please input five integers: ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\n");

	printf("Odd numbers: ");
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}

	printf("\n");

	printf("Even numbers: ");
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}

	printf("\n");

	return 0;
}

// 배열 Swap하기 (10주차 포인터)

int main_pointer1(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int i, temp;
	int* ptr1 = arr1;
	int* ptr2 = arr2;

	printf("arr1: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("arr2: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	printf("\n");

	for (i = 0; i < 6; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2++;
	}

	printf("after swap\n");
	printf("arr1: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("arr2: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	return 0;
}

// 표준편차 구하기 (11주차 포인터 2)

double calculate_stddev(double data[]);

int main_pointer2(void)
{
	int i;
	double data[5];
	printf("Enter 5 real numbers");
	for (i = 0; i < 5; i++)
		scanf("%d", &data[i]);
	printf("\nStandard Deviation: %lf", calculate_stddev(data));
	return 0;
}

double calculate_stddev(double data[]) {
	double sum = 0.0, mean, sd = 0.0;
	int i;
	for (i = 0; i < 5; ++i)
		sum += data[i];
	mean = sum / 5;
	for (i = 0; i < 5; ++i)
		sd += pow(data[i] - mean, 2);
	return sqrt(sd / 5);
}

// 대소문자 바꾸기 (12주차 문자열)

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

int main_string(void)
{
	unsigned int i;
	char buffer[50];

	printf("Input> ");
	fgets(buffer, sizeof(buffer), stdin);

	for (i = 0; i < strlen(buffer) - 1; i++)
		buffer[i] = convCase(buffer[i]);
	buffer[i] = 0; // \n 문자의 삭제

	printf("output> %s", buffer);

}

// 도시정보 출력 (13주차 구조체)

#define MAX_STRING_SIZE 50

typedef struct City {
	char name[50];
	char country[50];
	int population;
}City;

int main_struct(void)
{
	City city_list[3] = { 0 };
	int i;

	printf("Input three cities: \n");

	for (i = 0; i < 3; i++)
	{
		printf("Name: ");
		fgets(city_list[i].name, MAX_STRING_SIZE, stdin);

		printf("Country: ");
		fgets(city_list[i].country, MAX_STRING_SIZE, stdin);
		
		printf("Population: ");
		scanf_s("%d", &city_list[i].population);

		while (getchar() != '\n');
	}

	printf("\n");

	printf("Printing the three cities: \n");

	for (i = 0; i < 3; i++)
	{
		city_list[i].name[strlen(city_list[i].name) - 1] = 0;
		city_list[i].country[strlen(city_list[i].country) - 1] = 0;
		
		printf("%d, %s in %s with a population of %d people \n",
			i + 1, city_list[i].name, city_list[i].country, city_list[i].population);
	}
}