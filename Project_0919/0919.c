#include <stdio.h>

/*
int main(void)
{

	// ������ sizeof�� �̿��� ����Ʈ ũ�⸦ Ȯ��

	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ��: %d \n", sizeof(ch));
	printf("���� inum�� ũ��: %d \n", sizeof(inum));
	printf("���� dnum�� ũ��: %d \n", sizeof(dnum));


	printf("char�� ũ��: %d \n", sizeof(char));
	printf("int�� ũ��: %d \n", sizeof(int));
	printf("long�� ũ��: %d \n", sizeof(long));
	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double));

	return 0;
}

*/

/*

int main(void)
{
	//	������ ǥ�� �� ó���� ���� �Ϲ��� �ڷ��� ����

	int8_t num1 = 1, num2 = 2, result1 = 0;
	int16_t num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2: % d, % d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: % d, % d \n", sizeof(num3), sizeof(num4));
	printf("size of char add : % d \n", sizeof(num1 + num2));
	printf("size of short add : % d \n", sizeof(num3 + num4));

	result1 = num1 + num2;
	result2 = num3 + num4;

	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));

	return 0;
}
*/

/*
int main(void)
{
	double rad;
	double area;
	printf("���� ������ �Է� ");
	scanf_s("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("���� ����: %f \n", area);

	return 0;

	}

*/

/*
int main(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;
	printf("%c %d, \n", ch1, ch1);
	printf("%c %d, \n", ch2, ch2);
	printf("%c %d, \n", ch3, ch3);
	printf("%c %d, \n", ch4, ch4);

	return 0;
}
*/

/*
int main(void)
{
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("���� 245�� �Ǽ���: %f, \n", num1);
	printf("�Ǽ� 3.1415�� ������: %d, \n", num2);
	printf("ū ���� 129�� ���� ������: %d, \n", ch);

	return 0;

}

*/

/*
int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = (double)num1 / num2;
	printf("������ ���: %f \n", divResult);

	return 0;

}

*/
/*
int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2);
	return 0;
}
*/

/*
int main(void)
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);

	return 0;
}

*/

/*
int main(void)
{
	double d1 = 1.23e-3;
	double d2 = 1.23e-4;
	double d3 = 1.23e-5;
	double d4 = 1.23e-6;

	printf("%g \n", d1);
	printf("%g \n", d2);
	printf("%g \n", d3);
	printf("%g \n", d4);

	return 0;
}
*/

/*
int main(void)
{
	printf("%s, %s, %s \n", "AAA", "BBB", "CCC");

	return 0;
}

*/

/*
int main(void)
{
	printf("%-8s %14s %5s \n", "��  ��", "�����а�", "�г�");
	printf("%-8s %14s %5d \n", "�赿��", "���ڰ���", 3);
	printf("%-8s %14s %5d \n", "������", "��ǻ�Ͱ���", 2);
	printf("%-8s %14s %5d \n", "�Ѽ���", "�̼�������", 4);

	return 0;

}
*/

/*
int main(void)
{
	printf("%8.2f\n", 15.9029444f);
	printf("%8.2f\n", 2223.01f);
	return 0;
}

*/

/*
#include <stdint.h>

int main(void)
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %o %x", &num1, &num2, &num3);

	printf("�Է��� ���� 10���� ���: ");
	printf("%d %d %d \n", num1, num2, num3);

	return 0;
}

*/
/*
#include <stdio.h>
int main(void)
{
	int xpos1, ypos1;
	int xpos2, ypos2;
	int area;

	printf("�� ����� x, y��ǥ: ");
	scanf_s("%d %d", &xpos1, &xpos2);
	printf("�� �ϴ��� x, y��ǥ: ");
	scanf_s("%d %d", &ypos1, &ypos2);
	area = (xpos1 - xpos2) * (ypos1 - ypos2);
	printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�. \n", area);

	return 0;

}
*/

/*
#include <stdint.h>

int main(void)
{
	double num1, num2;
	printf("�� ���� �Ǽ� �Է�: ");

	scanf_s("%lf %lf", &num1, &num2);

	printf("�� ���� ����: %f \n", num1 + num2);
	printf("�� ���� ����: %f \n", num1 - num2);
	printf("�� ���� ����: %f \n", num1 * num2);
	printf("�� ���� ������: %f \n", num1 / num2);

	return 0;

}

*/

/*
#include <stdio.h>

int main(void)
{
	int asc;
	printf("�����Է�: ");
	scanf_s("%d", &asc);
	printf("�ƽ�Ű ����: %c \n", asc);

	return 0;

}
*/

/*
int main(void)
{
	char asc;
	printf("���ĺ�: ");
	scanf_s("%c", &asc);
	printf("�ƽ�Ű�ڵ�: %d \n", asc);

	return 0;
}

*/

#include <stdio.h>
int main(void)
{
	double kil = 0.0;
	double result = 0.0;

	printf("Please enter kilometer: ");
	scanf_s("%lf", &kil);

	result = (double)kil / (double)1.609;

	printf("%.1f km is equal to %.1f miles.", kil, result);

	return 0;


}