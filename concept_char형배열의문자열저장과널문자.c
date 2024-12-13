#include <stdio.h>

/*
1. �迭�� �������� ������ ��, ���ڿ��� ������ �ι��ڶ�� �Ҹ��� '\0' �� ���Եȴ�.
(���� '0'���� �ٸ�)

2. '\0' ------> �ƽ�Ű�ڵ�(������) ��°� 0, ���ڿ� ��°� = ����.

3.	�迭�� ���� = ���ڿ��� ����
	But, �迭�� �� = ���ڿ��� �� X

	3.1 �� ���ڴ� ���ڿ��� ���� �Ǵ��� �� �ִ� �������
		�ڸ��� �ű����� ���ڿ��� ���� ������ �� ����
*/

int main_concept2(void)
{
	char str[] = "Good morning!";
	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("�� ���� ������ ���: %c \n", str[13]);	// �� �������� '\0' �� ����� �� �ƹ��͵� ������ ����
	printf("�� ���� ������ ���: %d \n", str[13]);	// 0���� ���� (�ռ� �����ߵ��� �޸𸮻� �� 0���� �����)

	str[12] = '?';

	printf("���ڿ� ���: %s \n", str);
	return 0;
}

int main_concept2_1(void)
{
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = '\0';
	printf("string: %s \n", str);

	str[6] = '\0';
	printf("string: %s \n", str);

	str[1] = '\0';
	printf("string: %s \n", str);

	return 0;
}