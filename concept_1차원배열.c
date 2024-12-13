#include <stdio.h>

// 1차원 배열의 선언, 초기화 및 접근 관련 예제

int main_concept1(void) // main만 남기면 정상 작동
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[ ] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };

	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기: %d \n", sizeof(arr1));	// sizeof 연산 결과로 배열의 바이트 크기 정보 반환
	printf("배열 arr2의 크기: %d \n", sizeof(arr2));	// int의 크기 * 요소의 개수 가 배열의 크기가 된다!
	printf("배열 arr3의 크기: %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);				// 배열의 길이 = 배열의 크기 /  자료형의 크기
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++)	// 배열이기에 for문을 통한 순차적 접근이 가능함
	{								// arr1[0], arr1[1], ..., arr1[4]
		printf("%d", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < ar2Len; i++)	// 다수의 변수라면 반복문을 통한 순차적 접근이 불가능함
	{								// 배열이 다름!, 다른 배열 = 다른 변수 = 순차적 접근 불가능
		printf("%d", arr2[i]);
	}
	printf("\n");


	for (i = 0; i < ar3Len; i++)
	{
		printf("%d", arr3[i]);
	}
	printf("\n");

	return 0;
}