#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num)
{
	printf("������� ���: %d \n", num);
}

int ReadNum(void)
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}

int main(void)
{
	int num1, num2, result;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}