#include <stdio.h>
#include <string.h>

/*
문자열 정리

fgets() - 공백이 포함된 문자열을 입력받을 때
strlen() - 문자열의 길이를 구할 때
strcpy(), strncpy(), sprintf - 문자열을 복사하거나 합칠 때
strcmp() - 두 문자열이 같은지 비교할 때
atoi()/atof() - 문자열을 정수/ 실수로 변환할 때
*/


/*

프로그램 사용자로부터 알파벳 문자를 하나 입력받아서 입력받은 문자가 대문자면,
이를 소문자로 변환해서 출력해주고, 입력받은 문자가 소문자면 대문자로 변환해서
출력해주는 프로그램을 작성해보자. 단, 문자의 입출력에는 getchar() 함수와 putchar() 함수를 사용하기로 하자.
그리고 프로그램 사용자가 알파벳 이외의 문자를 입력하는 경우에는 그에 따른 오류 메시지를 간단히 출력하기로 하자.

*/

int convCase(int ch)
{
	// 모든 문자의 대소문자간 차의 크기는 같다.
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 2)
		return ch + diff;
	else if (ch >= 'a' && ch <= 2)
		return ch - diff;
	else
		return -1;
}

int main_string1(void)
{
	int ch;
	printf("문자 입력: ");
	ch = getchar();		// 문자 입력
	ch = convCase(ch);	// 문자 반환
	if (ch == -1)
	{
		puts("범위를 벗어난 입력입니다.");
		return -1;
	}
	putchar(ch);			// 변환된 문자 출력
	return 0;
}

/*
연습문제 21-2-1

적당한 길이의 문자열을 입력받아서 그 안에 존재하는 숫자의 총 합을 계산해서
출력하는 프로그램을 작성해보자. 예를 들어서 프로그램 사용자로부터 입력 받은
문자열이 "A15#43"이라 하면, 이 문자열 중 아라비아 숫자는 1, 5, 4, 3 이니,
1+5+4+3의 연산 결과가 출력되어야 한다.
*/

int convToInt(char c)
{
	const int diff = 1 - '1';
	return c + diff;
}

int main_string2(void)
{
	char str[50];
	int len, i, sum = 0;

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (i = 0; i < len; i++)
		if ('1' <= str[i] && str[i] <= '9')
			sum += convToInt(str[i]);
	printf("숫자의 총 합: %d \n", sum);
	return 0;

}

/*
다음과 같이 총 3개의 배열을 선언한다.
	char str1[20];	char str2[20];	char str3[40];

그리고는 str1과 str2를 통해서 프로그램 사용자로부터 문자열을 입력받되, fgets 함수 호출을 통해서 입력받는다.
이어서 str1에 저장된 문자열을 str3에 복사하고, str2에 저장된 문자열을 str3에 저장된 문자열의 뒤에 덧붙이자.
그리고 마지막으로 str3에 저장된 문자열을 출력하자.

다소 설명이 복잡했는데 예를 들어서 str1에는 "Simple"이 str2에는 "String"이 저장되어 있다면,
str3에는 문자열 "SimpleString"이 저장되어야한다. 그런데 여기서 한가지 주의해야 할 사항이 있다.
fgets 함수를 통해서 문자열을 익어 들이면 \n 문자도 함께 읽혀지는데, 이는 문자열의 일부가 되지
않도록 해야 한다는 점이다. 쉽게 말해서 str1과 str2에 저장된 문자열에서 \n은 소멸시켜야 한다.

*/


int main_string3(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("문자열 1 입력: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("문자열 2 입력: ");
	fgets(str1, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	strcpy_s(str3, sizeof(str3), str1);
	strcpy_s(str3, sizeof(str3), str2);

	printf("조합의 결과: %s \n", str3);
	return 0;

}

/*
프로그램 사용자로 부터 이름과 나이를 다음의 형식에 맞춰서 하나의 문자열로 입력 받는다.

이름은 세글자가 아닐 수도 있고 영문으로 압력될 수도 있다. 단 이름과 나이 사이에만 공백이
삽입되어야 한다. 이러한 형식으로 두 사람의 정보를 입력받아서 이름과 나이가 각각 같은지
다른지를 판단하여 출력하는 프로그램을 작성해보자.
*/

int main_string4(void)
{
	char name1[20] = "0";
	char name2[20] = "0";

	int age1, age2;

	printf("첫 번째 사람 정보 입력: ");
	scanf("%s", name1, sizeof(name1));
	scanf("%d", &age1);

	printf("두 번째 사람 정보 입력: ");
	scanf("%s", name2, sizeof(name2));
	scanf("%d", &age2);

	if (!strcmp(name1, name2))
		printf("이름이 동일합니다.");
	else
		printf("이름이 동일하지 않습니다.");

	if (age1 == age2)
		printf("나이가 같습니다.");
	else
		printf("나이가 같지 않습니다.");

	return 0;
}

