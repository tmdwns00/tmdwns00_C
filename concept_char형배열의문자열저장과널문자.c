#include <stdio.h>

/*
1. 배열에 문자형을 저장할 때, 문자열의 끝에는 널문자라고 불리는 '\0' 이 삽입된다.
(문자 '0'과는 다름)

2. '\0' ------> 아스키코드(정수형) 출력값 0, 문자열 출력값 = 없음.

3.	배열의 시작 = 문자열의 시작
	But, 배열의 끝 = 문자열의 끝 X

	3.1 널 문자는 문자열의 끝을 판단할 수 있는 방법으로
		자리를 옮김으로 문자열의 끝을 조절할 수 있음
*/

int main_concept2(void)
{
	char str[] = "Good morning!";
	printf("배열 str의 크기: %d \n", sizeof(str));
	printf("널 문자 문자형 출력: %c \n", str[13]);	// 맨 마지막인 '\0' 을 출력한 것 아무것도 나오지 않음
	printf("널 문자 정수형 출력: %d \n", str[13]);	// 0으로 나옴 (앞서 설명했듯이 메모리상 값 0으로 저장됨)

	str[12] = '?';

	printf("문자열 출력: %s \n", str);
	return 0;
}

int main_concept2_1(void)
{
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = '\0';
	printf("string: %s \n", str);

	str[6] = '\0';
	printf("string: %s \n", str);

	str[1] = '\0';
	printf("string: %s \n", str);

	return 0;
}