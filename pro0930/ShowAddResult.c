#include <stdio.h>

void ShowAddResult(int num)		//���� ���� (O), ��ȯ �� (X)
{
	printf("������� ���: %d \n", num);
}

int ReadNum(void)		// �������� (X),  ��ȯ �� (O)
{
	int num;
	scanf_s("%d", num);
	return num;
}

void HowToUseThisProg(void)		// ��������, ��ȯ �� (X)
{

}