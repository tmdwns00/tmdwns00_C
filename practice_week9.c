#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력받자!
그리고 입력이 끝나면 다음의 내용을 출력하도록 예제를 작성해보자
단, 반드시 입력을 완료한 상태에서 '최댓값'과 '최솟값' 그리고 '총 합'을 계산해야 한다.
참고로 배열을 대상으로 scanf문을 구성할 때에는 다음과 같이 해야한다.

scanf("%d", &arr[0]);	-> 1번째 요소에 정수 값 입력 받음

변수를 대상으로 & 연산자를 붙여주듯이, 배열 요소를 대상으로 할 때에도 & 연산자를 붙여야한다.
*/


int main_array1(void)		// main만 남겨 놓으면 실행된다.
{
	int arr[5];
	int min, max, sum, i;		// 변수 선언

	for (i = 0; i < 5; i++) {

		printf("Input number:");
		scanf("%d", &arr[i]);
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

/*
char형 1차원 배열을 선언과 동사에 다음 문장의 내용으로 초기화하고,
초기화 이후에는 저장된 내용을 출력하는 예제를 작성해보자. "Good time"

참고로 C언어는 배열 기반의 문자열 저장 및 출력에 대한 별도의 기준을 제공하고 있다.
그리고 이와 관련해서 이어서 설명을 한다.
하지만 이 문제는 지금까지 우리가 공부한 범위 내에서 해결하여야 한다.

*/

int main_array2(void)						// main만 남기면 실행 잘 된다!
{
	char arr[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };
	int arrLen = sizeof(arr) / sizeof(char);
	int i;

	for (i = 0; i < arrLen; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");

	return 0;

}

/*
프로그램 사용자로부터 하나의 영단어를 입력 받아서
입력받은 영단어의 길이를 계산하여 출력하는 프로그램을 작성해보자
예를 들어서 "Array" 라는 단어가 입력되면 5가 출력되어야한다.
*/

int main_array3(void)
{
	int len = 0;
	char voca[100];
	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != '\0')		// 영단어의 길이를 세는 방법
		len++;						// 단어의 끝임을 유념

	printf("길이 = %d", len);
	return 0;
}

/*
프로그램 사용자로부터 영단어를 입력받아서 char형 배열에 저장한다.
그 다음 배열에 저장된 영단어를 역순으로 뒤집는다.
물론 이 때의 널 문자의 위치를 변경해서는 안된다.
뒤집고나서는 제대로 뒤집혀졌는지 확인하기 위해서 출력해보자.
*/

int main_array4(void)
{
	int len = 0, i;
	char voca[100], temp;

	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != '\0') {		// != 신경쓰기!!
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = voca[i];
		voca[i] = voca[len - 1 - i];
		voca[len - 1 - i] = temp;
	}
	printf("\n");

	printf("뒤집힌 영단어: %s \n", voca);

	return 0;
}

/*
프로그램 사용자로부터 영단어를 입력받는다. 그리고 나서,
입력받은 영단어를 구성하는 문자 중에서 아스키코드의 값이
가장 큰 문자를 찾아서 출력하는 프로그램을 작성해보자
예를들어 LOVE -> V (아스키코드가 가장 큼)
*/

int main_array5(void)
{
	int len = 0;
	char voca[100];
	char max;
	int i;

	printf("영단어 입력:");
	scanf("%s", voca);

	while (voca[len] != '\0')
		len++;

	max = voca[0];

	for (i = 1; i < len; i++) {
		if (max < voca[i])
			max = voca[i];
	}

	printf("%c", max);
}

/*
가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열을 선언하여
구구단 중 2단, 3단, 4단을 다음과 같이 저장하자.
그리고 제대로 저장이 되었는지 확인하기 위한
출력을 진행하는 예제를 작성해보자.
*/

int main_array6(void)
{
	int arr[3][9];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {
			arr[i][j] = (i + 2) * (j + 1);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {
			printf("%2d ", arr[i][j]);	// 2d를 작성하는 이유는 일의 자리 수의 답과 십의 자리 수의 답을 같은 자릿수로 보기 좋게 정리하기 위해서
		}
		printf("\n");
	}
	return 0;
}

/*
오른쪽 그림의 형태대로 배열 A와 배열 B를 선언하자.
그리고 배열 A는 선언과 동시에 그림에서 명시하는대로 초기화를 진행하자.
그리고 배열 B도 이 그림에서 보이는 대로 초기화를 진행하되,
반드시 배열 A에 저장된 값을 이용해서 초기화를 진행해야 한다.
*/

int main_array7(void)
{
	int A[2][4] = { {1,2,3,4},
					{5,6,7,8} };
	int B[4][2];
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++)
			B[j][i] = A[i][j];
		printf("\n");
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++)
			printf("%d ", B[i][j]);
		printf("\n");
	}

	return 0;
}