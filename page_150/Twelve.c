#include <stdio.h>
#include <string.h>

int myAtoi(char *StringNumber)
{
	int Number = 0;
	for (int i = 0; i < strlen(StringNumber); i++)
	{
		Number *= 10;
		Number += StringNumber[i] - 48;
	}
	return Number;
}

void main()
{
	char Number[256];

	printf("Enter Your Number: ");
	scanf("%s", Number);

	printf("Number = %d\n", myAtoi(Number));
}