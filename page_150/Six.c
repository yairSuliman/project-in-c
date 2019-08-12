#include <stdio.h>

int SumOfAllEvenNumber(int);

void main()
{
	int Number, SumOfAllNumbers;

	printf("Enter number to check: ");
	scanf("%d", &Number);

	SumOfAllNumbers = SumOfAllEvenNumber(Number);

	printf("Sum of all even numbers = %d\n", SumOfAllNumbers);
}

int SumOfAllEvenNumber(int Number)
{
	int Sum = 0;
	for (int i = 2; i <= Number; i++)
	{
		if (i % 2 == 0)
		{
			Sum += i;
		}
	}
	return (Sum);
}