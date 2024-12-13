#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
1.	배열의 일반화
	배열의 인덱스가 0부터 시작함을 유의해야함.

	arr[N-1][M-1]= Count_Elements
	printf("%d", arr[N-1][M-1]); -> 세로 몇, 가로 몇에 위치한 요소의 값 추출

2. 실제 메모리에는 1차원 형태로 주소값이 지정됨
	2차원 배열의 실제 메모리 할당형태 -> 16진수 4바이트로
	%p를 통해 포인터 주소 출력가능

3. 배열의 크기를 알려주지 않고 초기화하기
	1차원에서도 지정하지 않은 상태에서 값을 입력받으면 크기를 채워줬듯이
	2차원에서도 채워준다. 단, 두가지 중 하나는 입력하여야 한다.

*/

int main_concept4(void)			// 2차원 배열의 크기 확인하기
{
	int arr1[3][4];
	int arr2[7][9];

	printf("세로3, 가로4: %d \n", sizeof(arr1));
	printf("세로7, 가로9: %d \n", sizeof(arr2));

	return 0;
}

int main_concept4_1(void)		// 2차원 배열요소 접근 관련 예제
{
	int villa[4][2];
	int popu, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++) {
			printf("%d층 %d호 인구수: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d층 인구수 %d \n", i + 1, popu);

	}
	return 0;
}

int main_concept4_2(void)			// 2차원 배열 선언과 동시에 초기화하기
{
	int i, j;
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int arr2[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	};

	int arr3[3][3] = { 1,2,3,4,5,6,7 };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr3[i][j]);
		printf("\n");
	}
	return 0;
}

