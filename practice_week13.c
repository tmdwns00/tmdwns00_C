#include <stdio.h>
#include <math.h>
#include <string.h>

/*
���ڿ� ������ '������ �̸�'�� ���ڿ� ������ '�ֹε�Ϲ�ȣ'
�׸��� ���������� '�޿�����'�� ������ �� �ִ� employees��� �̸��� ����ü�� �����غ���
�� ����ü�� ������� ���̰� 3�� �迭�� ��������. �׸��� �� ���� ������ ���α׷� ����ڷκ���
�Է¹޾Ƽ� �迭�� ������ ����, �迭�� ����� �����͸� ������� ����ϴ� ������ �ۼ��غ���
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
		printf("������ �̸�: "); scanf_s("%s", &arr[i].name, sizeof(arr[i].name));
		printf("�ֹε�Ϲ�ȣ: "); scanf_s("%s", &arr[i].pid, sizeof(arr[i].pid));
		printf("�޿�����: "); scanf_s("%d", &arr[i].salary, sizeof(arr[i].salary));

	}

	for (i = 0; i < 3; i++) {
		printf("�̸�: %s \n", arr[i].name);
		printf("�ֹι�ȣ: %s \n", arr[i].pid);
		printf("�޿�: %d \n", arr[i].salary);
	}


	return 0;

}

/*
���� ����ü�� �� ������ ������� ����� ���� �ٲ��ִ� �Լ��� �����ϰ�
�̸� ȣ���ϴ� ������ �ۼ��غ���. ���� �� ������ ����
�� ���� ����ü ������ ����� ���¿���,

	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

�� �� ����ü ������ �������, Ȥ�� �� ����ü ������ �ּ� ���� �������
SwapPoint��� �̸��� �Լ��� ȣ���ϸ� pos1�� xpos, ypos����
���� 5�� 7��, �׸��� pos2�� xpos, ypos���� ���� 2�� 5�� ����Ǿ���Ѵ�.

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
�� ����� x, y ��ǥ�� [0,0], ���ϴ��� x, y ��ǥ�� [100,100]�� ��ǥ������ ���簢�� ������ ǥ���ϱ� ����
����ü Rectangle�� �����ϵ�, ���� ����ü�� ������� �����غ���.

	typedef struct point {
		int xpos;
		int ypos;
	}Point;

�׸��� Rectangle ����ü ������ ���ڷ� ���޹޾Ƽ� �ش� ���簢���� ���̸� ����ؼ�
����ϴ� �Լ��� ���簢���� �̷�� �� ���� ��ǥ ������ ����ϴ� �Լ��� ���� �����غ���.
�� ��ǥ���󿡼� ���簢���� ǥ���ϱ� ���ؼ� �ʿ��� ���� ������ 4���� �ƴ� 2���̴�,
���簢���� �ǹ��ϴ�  Rectangle ���� ������ �� ���� ������ �����ؾ� �Ѵ�.

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
	printf("����: %d \n", ((rec.pos1.xpos - rec.pos2.xpos) * (rec.pos1.ypos - rec.pos2.ypos)));
}

void ShowRecPos(Rectangle rec)
{
	printf("�»��: [%d, %d] \n", rec.pos1.xpos, rec.pos1.ypos);
	printf("���ϴ�: [%d, %d] \n", rec.pos1.xpos, rec.pos2.ypos);
	printf("����: [%d, %d] \n", rec.pos2.xpos, rec.pos1.ypos);
	printf("���ϴ�: [%d, %d] \n", rec.pos2.xpos, rec.pos2.ypos);

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