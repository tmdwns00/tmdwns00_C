#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
1. scanf함수를 이용해서 문자열 입력 시 서식문자 %s 를 사용함

2. 배열이름 str앞에는 & 연산자를 붙이지 않음
	WHY? 이미 배열 이름은 첫번째 요소 주소를 가리키는 역할

3. 굳이 &을 쓰고 싶다면...
	scanf("%s", &str[0]);

4. 널 문자의 존재여부는 문자열의 판단여부가 됨
	4.1 존재 O -> 문자열, 존재 X -> 문자 배열

5. scanf_s사용시에는 입력 버퍼의 크기를 추가 인자로 전달
	result = scanf_s("%s", input_str, sizeof(input_str));
	입력 버퍼 이상의 값을 입력받으면 이를 무시함 (buffer overflow 방지)

6. scnaf 함수는 공백을 기준으로 데이터를 구분함
	6.1 문자열 내 공백 개수를 미리 알고 있지 않다면, 공백을 포함하는 문자열은 scanf로 처리 불가능


*/

int main_concept3(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf_s("%s", str, sizeof(str)); // 문자열을 입력할 때 %s 를 사용함.
	printf("입력받은 문자열: %s \n", str);

	printf("문자 단위 출력 ");
	while (str[idx] != '\0') // for문에서 문자열의 길이로 해도 좋으나 이렇게 하게 되면, 문자열의 마지막이 나왔을 때 break할 수 있음
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}