#include <stdio.h>

void main()
{
	int n;
	printf("insert the n: ");
	scanf("%d", &n);
	printf("Number %d in fibonacci is %d\n", n, GetTheNumberOfFibonacciSeries(n));
	
}

int  GetTheNumberOfFibonacciSeries(int n)
{
	int num1 = 1, num2 = 1, sum;

	for (int i = 1; i < n; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	
	return sum;
}