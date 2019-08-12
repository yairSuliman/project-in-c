#include <stdio.h>
#include <string.h>

void PrintRevers(char arr[])
{

	for (int i = (strlen(arr) - 1); i >= 0; i--)
	{
		putchar(arr[i]);
	}
	putchar('\n');
}

void main()
{
	char Word[256] ;

	printf("Enter your word small then 268 letters: ");
	gets(Word);
	
	PrintRevers(Word);
}