#include <stdio.h>

/*

���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�,
�̸� ȣ���ϴ� main�Լ��� �ۼ��غ���.
��, ���� �ΰ��� ���·� �Լ��� �����ؾ� �Ѵ�.

�Ϲ����� call-by-value ����� SquareByValue �Լ�
�����ͷ� ���� �����ϴ� SquareByPointer �Լ�
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

// �������� 14-1-2

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

// �������� 14-2-1

void ShowAllData(const int* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d", arr[i]);
}

/*
ShowAllData �Լ��� ����. ���ڷ� ���޵Ǵ� ������ �����Ͽ�
int�� �迭 ��� ��ü�� ����ϴ� �Լ��̴�.
�� �Լ��� �Ű����� ���𿡼� �Ű����� arr�� ������� const ������ �� ������ �����̰ڴ°�?
�� �Լ��� ������ ����� �ǵ��� �̾߱��غ���
*/

/*
���:

ShowAllData �Լ����� �Ű����� arr�� const�� ����� ������
�Լ� ���ο��� �迭�� �����͸� �������� �ʰڴٴ� �ǵ��� ��Ȯ�� �ϱ� �����Դϴ�.
const Ű���带 ����ϸ� ������ ���� ������ �ֽ��ϴ�:
	1. ������ ��ȣ: �Լ��� �迭�� ������ �������� �ʵ��� �Ͽ�, ���� �����Ͱ� �ǵ�ġ �ʰ� �����Ǵ� ���� �����մϴ�.
	2. ������ ���: �Լ� ����ڿ��� �� �Լ��� �����͸� �б⸸ �Ѵٴ� ���� ��Ȯ�� �����Ͽ�, �Լ� ��� ���� �������� ���Դϴ�.
	3. �ڵ� ������: �ٸ� �����ڵ��� �ڵ带 ���� ��, �� �Լ��� �Էµ� �����Ϳ� ���� � �۾��� �ϴ��� ���� ������ �� �ֽ��ϴ�.

����, const�� ��������ν� �Լ��� �ǵ��� ��Ȯ������, �������� ���Ἲ�� ������ �� �ֽ��ϴ�.
*/

// �������� 14-2

/*
�Ʒ��� ������ �� ���� �����Ҹ��� ������ ���ϰ� �ִ�. �װ��� �������� �̾߱� �غ���.
Ư�� �̿� �����ؼ� ShowData�Լ��� ������ �����ϱ� �ٶ���.
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
������
const ���� ����: ShowData �Լ����� const int *ptr�� int *rptr�� ��ȯ�Ͽ�
���� �����Ϸ��� �õ��ϰ� �ִ�. �̴� const ������ �����ϴ� ���̹Ƿ�
������ ������ �߻��Ѵ�.

�ذ� ���
ShowData �Լ� ������ ���� �������� �ʵ��� *rptr = 20; �κ��� �����ؾ� �Ѵ�.
�Ǵ� const�� �����ϰ� �Լ��� ������ �°� �����͸� ���� �����ϰ� �� �� �ִ�.
*/