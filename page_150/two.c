#include <stdio.h>

void PrintStars(int);

void main()
{
	int SizeOfStars;
	printf("Enter the size ");
	scanf("%d", &SizeOfStars);

	PrintStars(SizeOfStars);
}

void PrintStars(int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("*");
	}
	putchar('\n');
}