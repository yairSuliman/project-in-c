#include <stdio.h>

int function(int n)
{
	int numOne = 1, numTwo = 2, sum = 0;
	while (numTwo <= n)
	{
		sum += (numOne*numTwo);
		numOne = numTwo;
		numTwo++;
	}
	return sum;
}

void main()
{
	int number;
	printf("Enter your number: ");
	scanf("%d", &number);
	printf("N is %d\n", function(number));
}