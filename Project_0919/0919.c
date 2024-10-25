#include <stdio.h>

/*
int main(void)
{

	// 연산자 sizeof를 이용한 바이트 크기를 확인

	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기: %d \n", sizeof(ch));
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));


	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));

	return 0;
}

*/

/*

int main(void)
{
	//	정수의 표현 및 처리를 위한 일반적 자료형 선택

	int8_t num1 = 1, num2 = 2, result1 = 0;
	int16_t num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2: % d, % d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: % d, % d \n", sizeof(num3), sizeof(num4));
	printf("size of char add : % d \n", sizeof(num1 + num2));
	printf("size of short add : % d \n", sizeof(num3 + num4));

	result1 = num1 + num2;
	result2 = num3 + num4;

	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));

	return 0;
}
*/

/*
int main(void)
{
	double rad;
	double area;
	printf("원의 반지름 입력 ");
	scanf_s("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area);

	return 0;

	}

*/

/*
int main(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;
	printf("%c %d, \n", ch1, ch1);
	printf("%c %d, \n", ch2, ch2);
	printf("%c %d, \n", ch3, ch3);
	printf("%c %d, \n", ch4, ch4);

	return 0;
}
*/

/*
int main(void)
{
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로: %f, \n", num1);
	printf("실수 3.1415를 정수로: %d, \n", num2);
	printf("큰 정수 129를 작은 정수로: %d, \n", ch);

	return 0;

}

*/

/*
int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = (double)num1 / num2;
	printf("나눗셈 결과: %f \n", divResult);

	return 0;

}

*/
/*
int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2);
	return 0;
}
*/

/*
int main(void)
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);

	return 0;
}

*/

/*
int main(void)
{
	double d1 = 1.23e-3;
	double d2 = 1.23e-4;
	double d3 = 1.23e-5;
	double d4 = 1.23e-6;

	printf("%g \n", d1);
	printf("%g \n", d2);
	printf("%g \n", d3);
	printf("%g \n", d4);

	return 0;
}
*/

/*
int main(void)
{
	printf("%s, %s, %s \n", "AAA", "BBB", "CCC");

	return 0;
}

*/

/*
int main(void)
{
	printf("%-8s %14s %5s \n", "이  름", "전공학과", "학년");
	printf("%-8s %14s %5d \n", "김동수", "전자공학", 3);
	printf("%-8s %14s %5d \n", "이을수", "컴퓨터공학", 2);
	printf("%-8s %14s %5d \n", "한선영", "미술교육학", 4);

	return 0;

}
*/

/*
int main(void)
{
	printf("%8.2f\n", 15.9029444f);
	printf("%8.2f\n", 2223.01f);
	return 0;
}

*/

/*
#include <stdint.h>

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %o %x", &num1, &num2, &num3);

	printf("입력한 정수 10진수 출력: ");
	printf("%d %d %d \n", num1, num2, num3);

	return 0;
}

*/
/*
#include <stdio.h>
int main(void)
{
	int xpos1, ypos1;
	int xpos2, ypos2;
	int area;

	printf("좌 상단의 x, y좌표: ");
	scanf_s("%d %d", &xpos1, &xpos2);
	printf("우 하단의 x, y좌표: ");
	scanf_s("%d %d", &ypos1, &ypos2);
	area = (xpos1 - xpos2) * (ypos1 - ypos2);
	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다. \n", area);

	return 0;

}
*/

/*
#include <stdint.h>

int main(void)
{
	double num1, num2;
	printf("두 수의 실수 입력: ");

	scanf_s("%lf %lf", &num1, &num2);

	printf("두 수의 덧셈: %f \n", num1 + num2);
	printf("두 수의 뺄셈: %f \n", num1 - num2);
	printf("두 수의 곱셈: %f \n", num1 * num2);
	printf("두 수의 나눗셈: %f \n", num1 / num2);

	return 0;

}

*/

/*
#include <stdio.h>

int main(void)
{
	int asc;
	printf("숫자입력: ");
	scanf_s("%d", &asc);
	printf("아스키 문자: %c \n", asc);

	return 0;

}
*/

/*
int main(void)
{
	char asc;
	printf("알파벳: ");
	scanf_s("%c", &asc);
	printf("아스키코드: %d \n", asc);

	return 0;
}

*/

#include <stdio.h>
int main(void)
{
	double kil = 0.0;
	double result = 0.0;

	printf("Please enter kilometer: ");
	scanf_s("%lf", &kil);

	result = (double)kil / (double)1.609;

	printf("%.1f km is equal to %.1f miles.", kil, result);

	return 0;


}