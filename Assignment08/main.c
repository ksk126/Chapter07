#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0708();
void fillB(int a[], int b[], double sale);
void printAB(int a[], int b[]);

int main()
{
	assignment0708();

	return 0;
}

void assignment0708()
{
	static int a[5] = { 0 };
	static int b[5] = { 0 };
	double sale = 0;

	printf("상품가 5개를 입력하세요:\n");
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

	printf("할인율(%)? ");
	scanf("%lf", &sale);

	fillB(a, b, (sale/100));

	printAB(a, b);

	return;
}

void fillB(int a[], int b[], double sale)
{
	for (int i = 0; i < 5; i++)
	{
		b[i] = a[i] * (1 - sale);
	}

	return;
}

void printAB(int a[], int b[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("가격:		%d --> 할인가:		%d\n", a[i], b[i]);
	}

	return;
}