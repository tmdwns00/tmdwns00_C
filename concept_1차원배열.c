#include <stdio.h>

// 1���� �迭�� ����, �ʱ�ȭ �� ���� ���� ����

int main_concept1(void) // main�� ����� ���� �۵�
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[ ] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };

	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ��: %d \n", sizeof(arr1));	// sizeof ���� ����� �迭�� ����Ʈ ũ�� ���� ��ȯ
	printf("�迭 arr2�� ũ��: %d \n", sizeof(arr2));	// int�� ũ�� * ����� ���� �� �迭�� ũ�Ⱑ �ȴ�!
	printf("�迭 arr3�� ũ��: %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);				// �迭�� ���� = �迭�� ũ�� /  �ڷ����� ũ��
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++)	// �迭�̱⿡ for���� ���� ������ ������ ������
	{								// arr1[0], arr1[1], ..., arr1[4]
		printf("%d", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < ar2Len; i++)	// �ټ��� ������� �ݺ����� ���� ������ ������ �Ұ�����
	{								// �迭�� �ٸ�!, �ٸ� �迭 = �ٸ� ���� = ������ ���� �Ұ���
		printf("%d", arr2[i]);
	}
	printf("\n");


	for (i = 0; i < ar3Len; i++)
	{
		printf("%d", arr3[i]);
	}
	printf("\n");

	return 0;
}