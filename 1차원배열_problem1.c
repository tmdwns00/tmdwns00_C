#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
���̰� 5�� int�� �迭�� �����ؼ� ���α׷� ����ڷκ��� �� 5���� ������ �Է¹���!
�׸��� �Է��� ������ ������ ������ ����ϵ��� ������ �ۼ��غ���
��, �ݵ�� �Է��� �Ϸ��� ���¿��� '�ִ�'�� '�ּڰ�' �׸��� '�� ��'�� ����ؾ� �Ѵ�.
����� �迭�� ������� scanf���� ������ ������ ������ ���� �ؾ��Ѵ�.

scanf("%d", &arr[0]);	-> 1��° ��ҿ� ���� �� �Է� ����

������ ������� & �����ڸ� �ٿ��ֵ���, �迭 ��Ҹ� ������� �� ������ & �����ڸ� �ٿ����Ѵ�.
*/


int main_problem1 (void)		// main�� ���� ������ ����ȴ�.
{
	int arr[5];
	int min, max, sum, i;		// ���� ����

	for (i = 0; i < 5; i++) {

		printf("Input number:");
		scanf_s("%d", &arr[i]);
	}

	sum = max = min = arr[0];	// ���� �ʱ�ȭ

	for (i = 1; i < 5; i++) {
		sum += arr[i];
	}

	for (i = 1; i < 5; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	for (i = 1; i < 5; i++) {
		if (min < arr[i])
			min = arr[i];
	}

	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
	printf("����: %d\n", sum);
	
	return 0;
}
