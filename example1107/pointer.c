#include <stdio.h>
/*
 
// 포인터의 기본 개념

int main(void)
{
	int num;
	int* pnum;
	pnum = &num;

}

//  포인터 변수의 크기 확인
void main(void)
{
	int num = 0;
	int* x = &num;
	printf("%zu", sizeof(x));
}

// 이렇게 변수의 자료형에 안맞는 포인터 변수형을 사용하면 안됨

int main(void)
{
	int num1 = 5;
	double* pnum1 = &num1;

	double num2 = 5;
	int* pnum2 = &num2;

}

// 포인터가 가리키는 메모리를 참조하는 연산자

int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;
	pnum = &num1;
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	printf("num1=%d, num2:%d \n", num1, num2);
	return 0;
}

// 연습문제 12-1

int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;
	
	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", num);

	return 0;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d \n", *ptr1, *ptr2);

	return 0;
}

int main(void)
{
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;

	printf("%d %g \n", arr1[0], arr2[0]);
	return 0;


}

int main(void)
{
	int arr[3] = { 15, 25, 35 };
	int* ptr = &arr[0];		//

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);

	return 0;
}

int main(void)
{
	int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);

}

int main(void)
{
	int arr[3] = { 11,22,33 };
	int* ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");

	return 0;

}

//	연습문제 13-1

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;

	for (i = 0; i < 5; i++) {
		*ptr += 2;
		ptr++;
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

// 연습문제 13-2

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;

	for (i = 0; i < 5; i++) {
		*(ptr+i) += 2;
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int total = 0, i;

	for (i = 0; i < 5; i++)
		total += *(ptr--);

	printf("%d", total);
	return 0;
}

// 연습문제 13-4

int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* fptr = &arr[0];
	int* bptr = &arr[5];
	int i, temp;


	for (i = 0; i < 3; i++) {
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;
		bptr--;
	}
	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);

	return 0;
}
*/