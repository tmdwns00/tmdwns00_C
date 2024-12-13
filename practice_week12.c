#include <stdio.h>
#include <string.h>

/*
���ڿ� ����

fgets() - ������ ���Ե� ���ڿ��� �Է¹��� ��
strlen() - ���ڿ��� ���̸� ���� ��
strcpy(), strncpy(), sprintf - ���ڿ��� �����ϰų� ��ĥ ��
strcmp() - �� ���ڿ��� ������ ���� ��
atoi()/atof() - ���ڿ��� ����/ �Ǽ��� ��ȯ�� ��
*/


/*

���α׷� ����ڷκ��� ���ĺ� ���ڸ� �ϳ� �Է¹޾Ƽ� �Է¹��� ���ڰ� �빮�ڸ�,
�̸� �ҹ��ڷ� ��ȯ�ؼ� ������ְ�, �Է¹��� ���ڰ� �ҹ��ڸ� �빮�ڷ� ��ȯ�ؼ�
������ִ� ���α׷��� �ۼ��غ���. ��, ������ ����¿��� getchar() �Լ��� putchar() �Լ��� ����ϱ�� ����.
�׸��� ���α׷� ����ڰ� ���ĺ� �̿��� ���ڸ� �Է��ϴ� ��쿡�� �׿� ���� ���� �޽����� ������ ����ϱ�� ����.

*/

int convCase(int ch)
{
	// ��� ������ ��ҹ��ڰ� ���� ũ��� ����.
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 2)
		return ch + diff;
	else if (ch >= 'a' && ch <= 2)
		return ch - diff;
	else
		return -1;
}

int main_string1(void)
{
	int ch;
	printf("���� �Է�: ");
	ch = getchar();		// ���� �Է�
	ch = convCase(ch);	// ���� ��ȯ
	if (ch == -1)
	{
		puts("������ ��� �Է��Դϴ�.");
		return -1;
	}
	putchar(ch);			// ��ȯ�� ���� ���
	return 0;
}

/*
�������� 21-2-1

������ ������ ���ڿ��� �Է¹޾Ƽ� �� �ȿ� �����ϴ� ������ �� ���� ����ؼ�
����ϴ� ���α׷��� �ۼ��غ���. ���� �� ���α׷� ����ڷκ��� �Է� ����
���ڿ��� "A15#43"�̶� �ϸ�, �� ���ڿ� �� �ƶ��� ���ڴ� 1, 5, 4, 3 �̴�,
1+5+4+3�� ���� ����� ��µǾ�� �Ѵ�.
*/

int convToInt(char c)
{
	const int diff = 1 - '1';
	return c + diff;
}

int main_string2(void)
{
	char str[50];
	int len, i, sum = 0;

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (i = 0; i < len; i++)
		if ('1' <= str[i] && str[i] <= '9')
			sum += convToInt(str[i]);
	printf("������ �� ��: %d \n", sum);
	return 0;

}

/*
������ ���� �� 3���� �迭�� �����Ѵ�.
	char str1[20];	char str2[20];	char str3[40];

�׸���� str1�� str2�� ���ؼ� ���α׷� ����ڷκ��� ���ڿ��� �Է¹޵�, fgets �Լ� ȣ���� ���ؼ� �Է¹޴´�.
�̾ str1�� ����� ���ڿ��� str3�� �����ϰ�, str2�� ����� ���ڿ��� str3�� ����� ���ڿ��� �ڿ� ��������.
�׸��� ���������� str3�� ����� ���ڿ��� �������.

�ټ� ������ �����ߴµ� ���� �� str1���� "Simple"�� str2���� "String"�� ����Ǿ� �ִٸ�,
str3���� ���ڿ� "SimpleString"�� ����Ǿ���Ѵ�. �׷��� ���⼭ �Ѱ��� �����ؾ� �� ������ �ִ�.
fgets �Լ��� ���ؼ� ���ڿ��� �;� ���̸� \n ���ڵ� �Բ� �������µ�, �̴� ���ڿ��� �Ϻΰ� ����
�ʵ��� �ؾ� �Ѵٴ� ���̴�. ���� ���ؼ� str1�� str2�� ����� ���ڿ����� \n�� �Ҹ���Ѿ� �Ѵ�.

*/


int main_string3(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("���ڿ� 1 �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("���ڿ� 2 �Է�: ");
	fgets(str1, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	strcpy_s(str3, sizeof(str3), str1);
	strcpy_s(str3, sizeof(str3), str2);

	printf("������ ���: %s \n", str3);
	return 0;

}

/*
���α׷� ����ڷ� ���� �̸��� ���̸� ������ ���Ŀ� ���缭 �ϳ��� ���ڿ��� �Է� �޴´�.

�̸��� �����ڰ� �ƴ� ���� �ְ� �������� �зµ� ���� �ִ�. �� �̸��� ���� ���̿��� ������
���ԵǾ�� �Ѵ�. �̷��� �������� �� ����� ������ �Է¹޾Ƽ� �̸��� ���̰� ���� ������
�ٸ����� �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.
*/

int main_string4(void)
{
	char name1[20] = "0";
	char name2[20] = "0";

	int age1, age2;

	printf("ù ��° ��� ���� �Է�: ");
	scanf("%s", name1, sizeof(name1));
	scanf("%d", &age1);

	printf("�� ��° ��� ���� �Է�: ");
	scanf("%s", name2, sizeof(name2));
	scanf("%d", &age2);

	if (!strcmp(name1, name2))
		printf("�̸��� �����մϴ�.");
	else
		printf("�̸��� �������� �ʽ��ϴ�.");

	if (age1 == age2)
		printf("���̰� �����ϴ�.");
	else
		printf("���̰� ���� �ʽ��ϴ�.");

	return 0;
}

