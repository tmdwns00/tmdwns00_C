#include <stdio.h>

void ShowAddResult(int num)		//인자 전달 (O), 반환 값 (X)
{
	printf("덧셈결과 출력: %d \n", num);
}

int ReadNum(void)		// 인자전달 (X),  반환 값 (O)
{
	int num;
	scanf_s("%d", num);
	return num;
}

void HowToUseThisProg(void)		// 인자전달, 반환 값 (X)
{

}