/*

1st week 

// 주석과 printf 함수 유념하기
// 줄바꿈과 띄어쓰기 유념
// 세미콜론은 필수, void는 생략 가능함
// main()함수에서 정상종료는 0으로 함. 
// 서식문자 %d는 출력형태를 지정하는 것으로 d는 10진수 정수를 의미함
// 문자열 "" 뒤의 출력대상은 , 로 구분되고 개수마다 하나씩 , 로 구분함
// Escape Sequence은 별도의 기능을 가지는 특수문자로 역슬래시에 해당문자를 차례로 입력함
// \n 은 줄바꿈을 의미함

*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS		// scanf함수의 오류를 피하는 방법

// 2nd week

// 초기화 하지 않은 변수를 그대로 사용ㅎ면 경고 메시지나 컴파일 오류가 뜰 수 있음을 유의
// 선언이 다 끝나고 초기화하기

/*
int main(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2;

	printf("%d", num1);
	printf("%d", num2);

	return 0;
}

// 답은 9와 12임
// num2를 선언 및 초기화할때 연산 후 num1은 바로 9로 변환됨을 유의
// 몫은 /를 사용하고 나머지는 %를 사용함
// 논리 연산자는  && || ! 세가지가 있고 각각 AND OR XOR을 의미함

// b = binary, x = hexadecimal로 각각 2진수와 16진수를 의미함
// 0x로 시작하면 16진수, 0으로 시작하면 8진수로 인식함

	// 하나의 정수를 입력받아 그 수의 제곱을 출력받기

int main(void)
{
	int num;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	printf("제곱수는 %d 입니다.", num * num);

	return 0;
}
	// 두 수를 입력받아 몫과 나머지 출력하기

int main(void)
{
	int num1, num2;

	printf("두 수 입력: \n");
	scanf_s("%d %d", &num1, &num2);

	printf("몫은 %d이고 나머지는 %d입니다. \n", num1 / num2, num1 % num2);
	return 0;

}
	// 세개의 정수를 입력받아 복잡한 연산 출력하기

int main(void)
{
	int num1, num2, num3;
	
	printf("세 개의 정수를 입력하세요.");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("해당 연산의 결과는 %d입니다.", (num1 - num2) * (num2 + num3) * (num3 % num1));

	return 0;
}

	// 부호를 바꾸는 프로그램
	// ~이 반전은 시키나 0이 포함되어 있기 때문에 1을 더해줘야함

int main(void)
{
	int num;

	printf("정수입력: ");
	scanf_s("%d", &num);

	printf("해당 정수를 부호를 바꾸면 %d 입니다.", ~num+1);
	return 0;
}

*/

// 3rd week

/*

// 자료형은 데이터를 어떻게 표현할 것인가를 의미함
// 정수 자료형 앞에 unsigned를 붙이면 표현 가능한 값의 범위가 자연수로 제한되지만 범위는 2배 증가함.

// sizeof함수로 바이트의 크기를 확인 할 수 있음
// C프로그래밍에서 문자는 ''안에 표현하며 'A'는 65의 값을 가지고 있음

// const는 int나 double같은 자료형 앞에 작성하며 상수를 의미함

// float형은 %f를, double형은 %lf를 사용함.
// 정수형을 실수에 넣으면 소수점 아래는 버림함
// 값에 대응하는 문자는 %c를 문자열은 %s를 사용함.
// %e는 e표시법으로 적히고 %g는 %f와 %e중에 적절한 방식을 선택하여 출력함

// 필드폭을 지정하여 정돈된 출력을 보이려면 필드폭을 확보하기 위해 %8d와 같이 작성함
// 왼쪽 정렬의 경우 %-8d와 같이 작성함.
// 소수점 아래 자리를 출력할 때는 %.2f와 같이 %오른쪽에 숫자를 적어 표현함

	// 직사각형의 넓이 구하기

int main(void)
{
	int x1, y1, x2, y2;

	printf("첫번째 점의 좌표를 입력하세요: ");
	scanf_s("%d %d", &x1, &y1);

	printf("두번째 점의 좌표를 입력하세요: ");
	scanf_s("%d %d", &x2, &y2);

	printf("직사각형의 넓이는 %d 입니다.", (x1 - x2) * (y1 - y2));
	return 0;
}

	// 아스키코드의 문자를 입력받고 코드 번호 출력

int main(void)
{
	char ch;

	printf("문자를 입력하세요");
	scanf_s("%c", &ch);


	printf("%d", ch);
	return 0;
}
	// 번호 입력 받고 문자 출력

int main(void)
{
	int ch;

	printf("정수를 입력하세요");
	scanf_s("%d", &ch);


	printf("%c", ch);
	return 0;
}

int main(void)
{
	double k;

	printf("enter kilo: ");
	scanf_s("%lf", &k);

	printf("%.2lf km = %.2lf miles", (double)k, (double)k / 1.609);
	return 0;

}

*/

