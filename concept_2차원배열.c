#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
1.	�迭�� �Ϲ�ȭ
	�迭�� �ε����� 0���� �������� �����ؾ���.

	arr[N-1][M-1]= Count_Elements
	printf("%d", arr[N-1][M-1]); -> ���� ��, ���� � ��ġ�� ����� �� ����

2. ���� �޸𸮿��� 1���� ���·� �ּҰ��� ������
	2���� �迭�� ���� �޸� �Ҵ����� -> 16���� 4����Ʈ��
	%p�� ���� ������ �ּ� ��°���

3. �迭�� ũ�⸦ �˷����� �ʰ� �ʱ�ȭ�ϱ�
	1���������� �������� ���� ���¿��� ���� �Է¹����� ũ�⸦ ä�������
	2���������� ä���ش�. ��, �ΰ��� �� �ϳ��� �Է��Ͽ��� �Ѵ�.

*/

int main_concept4(void)			// 2���� �迭�� ũ�� Ȯ���ϱ�
{
	int arr1[3][4];
	int arr2[7][9];

	printf("����3, ����4: %d \n", sizeof(arr1));
	printf("����7, ����9: %d \n", sizeof(arr2));

	return 0;
}

int main_concept4_1(void)		// 2���� �迭��� ���� ���� ����
{
	int villa[4][2];
	int popu, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++) {
			printf("%d�� %dȣ �α���: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d�� �α��� %d \n", i + 1, popu);

	}
	return 0;
}

int main_concept4_2(void)			// 2���� �迭 ����� ���ÿ� �ʱ�ȭ�ϱ�
{
	int i, j;
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int arr2[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	};

	int arr3[3][3] = { 1,2,3,4,5,6,7 };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr3[i][j]);
		printf("\n");
	}
	return 0;
}

