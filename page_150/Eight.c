#include <stdio.h>

void PrintTheNumbersOfFibonacciSeries(int n);

void main()
{
	int n;
	printf("insert the n: ");
	scanf("%d", &n);
	PrintTheNumbersOfFibonacciSeries(n);
}

void PrintTheNumbersOfFibonacciSeries(int n)
{
	int num1 = 1, num2 = 1, sum ;

	printf("1");
	for (int i = 1; i < n; i++)
	{
		sum = num1 + num2;
		printf(", %d", sum);
		num1 = num2;
		num2 = sum;
	}
	putchar('\n');
}