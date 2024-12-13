#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력받자!
그리고 입력이 끝나면 다음의 내용을 출력하도록 예제를 작성해보자
단, 반드시 입력을 완료한 상태에서 '최댓값'과 '최솟값' 그리고 '총 합'을 계산해야 한다.
참고로 배열을 대상으로 scanf문을 구성할 때에는 다음과 같이 해야한다.

scanf("%d", &arr[0]);	-> 1번째 요소에 정수 값 입력 받음

변수를 대상으로 & 연산자를 붙여주듯이, 배열 요소를 대상으로 할 때에도 & 연산자를 붙여야한다.
*/


int main_problem1 (void)		// main만 남겨 놓으면 실행된다.
{
	int arr[5];
	int min, max, sum, i;		// 변수 선언

	for (i = 0; i < 5; i++) {

		printf("Input number:");
		scanf_s("%d", &arr[i]);
	}

	sum = max = min = arr[0];	// 변수 초기화

	for (i = 1; i < 5; i++) {
		sum += arr[i];
	}

	for (i = 1; i < 5; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	for (i = 1; i < 5; i++) {
		if (min < arr[i])
			min = arr[i];
	}

	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
	printf("총합: %d\n", sum);
	
	return 0;
}
