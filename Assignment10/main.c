#include <stdio.h>

void assignment0710();
void fillXy(int x[3][3], int y[3][3], int xy[3][3]);
void printXy(int x[3][3], int y[3][3], int xy[3][3], int n);

int main()
{
	assignment0710();

	return 0;
}

void assignment0710()
{
	static int x[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	static int y[3][3] = { {10, 20, 30}, {40, 50, 60}, {70, 80, 90} };
	static int xy[3][3] = { 0 };
	char ch = 0;

	fillXy(x, y, xy);

	printXy(x, y, xy, 0);

	printXy(x, y, xy, 1);

	printXy(x, y, xy, 2);

	return;
}

void fillXy(int x[3][3], int y[3][3], int xy[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			xy[i][j] = x[i][j] + y[i][j];
		}
	}

	return;
}

void printXy(int x[3][3], int y[3][3], int xy[3][3], int n)
{
	printf("%s За·Д:\n", n == 0 ? "x" :
		n == 1 ? "y" : "x + y");
	for (int i = 0; i < 3; i++)
	{
		if (n == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%d ", x[i][j]);
			}
			printf("\n");
		}

		else if (n == 1)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%d ", y[i][j]);
			}
			printf("\n");
		}

		else
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%d ", xy[i][j]);
			}
			printf("\n");
		}
	}

	return;
}