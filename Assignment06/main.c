#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0706();
void reverseArr(double a[], double b[]);
void printArr(double b[]);

int main()
{
	assignment0706();

	return 0;
}

void assignment0706()
{
	static double a[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
	static double b[10] = { 0 };

	reverseArr(a, b);

	printArr(b);

	return;
}

void reverseArr(double a[], double b[])
{
	for (int i = 0; i < 10; i++)
	{
		b[i] = i==0 ? a[9] : a[10 - (i+1)];
	}

	return;
}

void printArr(double b[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%.2lf ", b[i]);
	}

	return;
}