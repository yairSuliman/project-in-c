#include<stdio.h>

int GetTheSmallNumber(int, int, int);

void main()
{
	int numOne, numTwo, numThree;
	printf("Enter three numbers with a space - (1 2 3) : ");
	scanf("%d %d %d", &numOne, &numTwo, &numThree);
	printf("The small number is %d:\n", GetTheSmallNumber(numOne, numTwo, numThree));
}

int GetTheSmallNumber(int NumOne, int NumTwo, int NumThree)
{
	if ((NumOne < NumTwo) && (NumOne < NumThree))
	{
		return NumOne;
	}
	else if ((NumTwo < NumThree))
	{
		return NumTwo;

	}
	else
	{
		return NumThree;
	}
}