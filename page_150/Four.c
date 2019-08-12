#include <stdio.h>

void PrintEmptyRectangle(int x, int y);
void PrintFullRectangle(int x, int y);

void main()
{
	int x, y;
	printf("Enter the X of the rectangle: ");
	scanf("%d", &x);
	printf("Enter the Y of the rectangle: ");
	scanf("%d", &y);

	printf("Empty Rectangle:\n");
	PrintFullRectangle(x, y);
	printf("Empty Rectangle:\n");
	PrintEmptyRectangle(x, y);
}

void PrintEmptyRectangle(int x, int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (i == 0 || j == 0 || i == (y - 1) || j == (x - 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}

void PrintFullRectangle(int x, int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}