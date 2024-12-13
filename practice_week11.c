#include <stdio.h>

/*

변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고,
이를 호출하는 main함수를 작성해보자.
단, 다음 두가지 형태로 함수를 정의해야 한다.

일반적인 call-by-value 기반의 SquareByValue 함수
포인터로 값을 전달하는 SquareByPointer 함수
*/

int SquareByValue(int num)
{
	return num * num;
}

int SquareByPointer(int* ptr)
{
	int num = *ptr;
	*ptr = num * num;
}

int main_pointer2_1(void)
{
	int num = 10;
	printf("%d \n", SquareByValue(num));
	SquareByPointer(&num);
	printf("%d \n", num);
	return 0;

}

// 연습문제 14-1-2

void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
}


int main_pointer2_2(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}

// 연습문제 14-2-1

void ShowAllData(const int* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d", arr[i]);
}

/*
ShowAllData 함수를 보자. 인자로 전달되는 정보를 참조하여
int형 배열 요소 전체를 출력하는 함수이다.
이 함수의 매개변수 선언에서 매개변수 arr을 대상으로 const 선언을 한 이유가 무엇이겠는가?
이 함수를 정의한 사람의 의도를 이야기해보자
*/

/*
답안:

ShowAllData 함수에서 매개변수 arr에 const를 사용한 이유는
함수 내부에서 배열의 데이터를 변경하지 않겠다는 의도를 명확히 하기 위함입니다.
const 키워드를 사용하면 다음과 같은 장점이 있습니다:
	1. 데이터 보호: 함수가 배열의 내용을 변경하지 않도록 하여, 원본 데이터가 의도치 않게 수정되는 것을 방지합니다.
	2. 안전성 향상: 함수 사용자에게 이 함수가 데이터를 읽기만 한다는 것을 명확히 전달하여, 함수 사용 시의 안전성을 높입니다.
	3. 코드 가독성: 다른 개발자들이 코드를 읽을 때, 이 함수가 입력된 데이터에 대해 어떤 작업을 하는지 쉽게 이해할 수 있습니다.

따라서, const를 사용함으로써 함수의 의도가 명확해지고, 데이터의 무결성을 유지할 수 있습니다.
*/

// 연습문제 14-2

/*
아래의 예제는 한 가지 지적할만한 사항을 지니고 있다. 그것이 무엇인지 이야기 해보자.
특히 이와 관련해서 ShowData함수를 유심히 관찰하길 바란다.
*/

void ShowData(const int* ptr)
{
	int* rptr = ptr;
	print("%d", *rptr);
	*rptr = 20;
}

int main()
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}

/*
문제점
const 제약 위반: ShowData 함수에서 const int *ptr를 int *rptr로 변환하여
값을 변경하려고 시도하고 있다. 이는 const 제약을 위반하는 것이므로
컴파일 오류가 발생한다.

해결 방법
ShowData 함수 내에서 값을 변경하지 않도록 *rptr = 20; 부분을 제거해야 한다.
또는 const를 제거하고 함수의 목적에 맞게 포인터를 수정 가능하게 할 수 있다.
*/