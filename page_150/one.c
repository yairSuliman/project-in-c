#include <stdio.h>

void PrintTheNumberBtween(int, int);

void main()
{
	int NumOne, 
		NumToo;

	printf("enter the ferst number: ");
	scanf("%d", &NumOne);
	printf("enter the second number: ");
	scanf("%d", &NumToo);
	PrintTheNumberBtween(NumOne, NumToo);
}

void PrintTheNumberBtween(int NumberOne, int NumberToo)
{
	int BigNumber;
	int SmallNuber;

	if (NumberOne > NumberToo)
	{
		BigNumber = NumberOne;
		SmallNuber = NumberToo;
	}
	else
	{
		BigNumber = NumberToo;
		SmallNuber = NumberOne;
	}
	for (int i = SmallNuber; i <= BigNumber; i++)
	{
		printf("%d\n", i);
	}
}