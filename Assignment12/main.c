#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0712();
void printArr(char a[]);
void computeSit(char a[]);

int main()
{
	assignment0712();
	
	return 0;
}

void assignment0712()
{
	static char a[10] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };

	printArr(a);

	while (a[9] != 'X')
	{
		computeSit(a);

		printArr(a);
	}

	return;
}

void printArr(char a[])
{
	printf("현재 좌석: [");
	for (int i = 0; i < 10; i++)
	{
		printf(" %c", a[i]);
	}
	printf(" ]\n");

	return;
}

void computeSit(char a[])
{
	int sit = 0, count = 0;
	printf("예매할 좌석수? ");
	scanf("%d", &sit);

	for (int i = 0; i < 10 && count < sit; i++)
	{
		if (a[i] == 'O')
		{
			a[i] = 'X';
			printf("%d ", i + 1);
			count++;
		}
	}
	printf("번 좌석을 예매했습니다.\n");

	return;
}