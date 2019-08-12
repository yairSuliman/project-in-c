#include <stdio.h>

char * getTheLongString(arrOne, arrTwo)
{
	if (strlen(arrOne) > strlen(arrTwo)){
		return arrOne;
	}
	else if (strlen(arrTwo) > strlen(arrOne))
	{
		return arrTwo;
	}
	return NULL;
}
void main()
{
	char stringOne[100], stringTwo[100], *result;
	printf("Please enter the first string: ");
	gets(stringOne);
	printf("Please enter the second string: ");
	scanf("%s", stringTwo);
	result = getTheLongString(stringOne, stringTwo);
	if (result != NULL)
	{
		printf("the big string is \"%s\":\n", result);
	}
	else
	{
		printf("Both strings are the same size!!!\n");
	}
	
}

