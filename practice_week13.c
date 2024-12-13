#include <stdio.h>
#include <math.h>
#include <string.h>

/*
문자열 형태의 '종업원 이름'과 문자열 형태의 '주민등록번호'
그리고 정수형태의 '급여정보'를 저장할 수 있는 employees라는 이름의 구조체를 정의해보자
이 구조체를 기반으로 길이가 3인 배열을 선언하자. 그리고 세 명의 정보를 프로그램 사용자로부터
입력받아서 배열에 저장한 다음, 배열에 저장된 데이터를 순서대로 출력하는 예제를 작성해보자
*/

struct employee
{
	char name[20];
	char pid[20];
	int salary;
};

int main_struct1(void)
{
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("종업원 이름: "); scanf_s("%s", &arr[i].name, sizeof(arr[i].name));
		printf("주민등록번호: "); scanf_s("%s", &arr[i].pid, sizeof(arr[i].pid));
		printf("급여정보: "); scanf_s("%d", &arr[i].salary, sizeof(arr[i].salary));

	}

	for (i = 0; i < 3; i++) {
		printf("이름: %s \n", arr[i].name);
		printf("주민번호: %s \n", arr[i].pid);
		printf("급여: %d \n", arr[i].salary);
	}


	return 0;

}

/*
다음 구조체의 두 변수를 대상으로 저장된 값을 바꿔주는 함수를 정의하고
이를 호출하는 예제를 작성해보자. 예를 들어서 다음과 같이
두 개의 구조체 변수가 선언된 상태에서,

	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

이 두 구조체 변수를 대상으로, 혹은 두 구조체 변수의 주소 값을 대상으로
SwapPoint라는 이름의 함수를 호출하면 pos1의 xpos, ypos에는
각각 5와 7이, 그리고 pos2의 xpos, ypos에는 각각 2와 5가 저장되어야한다.

*/

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void SwapPoint(Point* ptr1, Point* ptr2)
{
	Point temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main_struct2(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);

	return 0;
}

/*
좌 상단의 x, y 좌표가 [0,0], 우하단의 x, y 좌표가 [100,100]인 좌표평면상의 직사각형 정보를 표현하기 위한
구조체 Rectangle을 정의하되, 다음 구조체를 기반으로 정의해보자.

	typedef struct point {
		int xpos;
		int ypos;
	}Point;

그리고 Rectangle 구조체 변수를 인자로 전달받아서 해당 직사각형의 넓이를 계산해서
출력하는 함수와 직사각형을 이루는 네 점의 좌표 정보를 출력하는 함수를 각각 정의해보자.
단 좌표평면상에서 직사각형을 표현하기 위해서 필요한 점의 개수는 4개가 아닌 2개이니,
직사각형을 의미하는  Rectangle 변수 내에는 두 점의 정보만 존재해야 한다.

*/

typedef struct point {
	int xpos;
	int ypos;
}Point;

typedef struct Rectangle {
	Point pos1;
	Point pos2;
}Rectangle;


void ShowRecArea(Rectangle rec)
{
	printf("넓이: %d \n", ((rec.pos1.xpos - rec.pos2.xpos) * (rec.pos1.ypos - rec.pos2.ypos)));
}

void ShowRecPos(Rectangle rec)
{
	printf("좌상단: [%d, %d] \n", rec.pos1.xpos, rec.pos1.ypos);
	printf("좌하단: [%d, %d] \n", rec.pos1.xpos, rec.pos2.ypos);
	printf("우상단: [%d, %d] \n", rec.pos2.xpos, rec.pos1.ypos);
	printf("우하단: [%d, %d] \n", rec.pos2.xpos, rec.pos2.ypos);

}

int main_struct3(void)
{
	Rectangle rec1 = { {1,1},{4,4} };
	Rectangle rec2 = { {0,0},{7,5} };
	ShowRecArea(rec1);
	ShowRecPos(rec1);
	ShowRecArea(rec2);
	ShowRecPos(rec2);
	return 0;
}