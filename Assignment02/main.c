#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void assignment0704();
void fillA();
void printA(int a[], int max);
int findMax(int a[]);

int a[10] = { 0 };

int main()
{
	srand((unsigned)time(NULL));

	assignment0704();

	return 0;
}

void assignment0704()
{
	fillA();

	int indexMax = findMax(a);

	printA(a, indexMax);

	return;
}

void fillA()
{
	for (int i = 0; i < 10; i++)

	{
		a[i] = rand() % 100;

		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				i--;
			}
		}
	}

	return;
}

void printA(int a[], int max)
{
	printf("¹è¿­: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\nÃÖ´ñ°ª: ÀÎµ¦½º=%d, °ª=%d", max, a[max]);

	return;
}

int findMax(int a[])
{
	int max = a[0], indexMax = 0;

	for (int i = 1; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			indexMax = i;
		}
	}

	return indexMax;
}