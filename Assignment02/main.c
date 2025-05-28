#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void assignment0704();
void fillA();
void printA(int a[]);
void findMax(int a[]);

int a[10] = { 0 };

int main()
{
	assignment0704();

	return 0;
}

void assignment0704()
{
	fillA();

	findMax(a);

	printA(a);

	return;
}

void fillA()
{
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
	}

	return a;
}

void printA()
{
	printf("¹è¿­: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	printf("ÃÖ´ñ°ª: ÀÎµ¦½º=%d, °ª=%d", indexMax);

	return;
}

void findMax()
{
	int max = a[0], indexMax = 0;

	for (int i = 1; i < 10; i++)
	{
		if (a[i] > a[i - 1])
		{
			i = indexMax;
			a[i] = max;
		}
	}

	return;
}