#include <stdio.h>
#include <string.h>

void addStrings(char * arrOne, char *arrTwo, int sizeOfArrOne);

void main()
{
	char FirstArr[256], ScondArr[256];

	//change the text color to color 2 (green) 
	system("color 2");

	printf("Enter the first string: ");
	scanf("%s", FirstArr);
	
	printf("Enter the scond string: ");
	scanf("%s", ScondArr);
	
	addStrings(FirstArr, ScondArr ,sizeof(FirstArr));

	printf("the result is = %s\n", FirstArr);
	
}

void addStrings(char * arrOne, char *arrTwo,int sizeOfArrOne)
{
	int endOfArrOneText = strlen(arrOne);
	int charOfArrTwo = 0;

	for (; (endOfArrOneText < sizeOfArrOne - 1) && charOfArrTwo < strlen(arrTwo); endOfArrOneText++, charOfArrTwo++)
	{
		arrOne[endOfArrOneText] = arrTwo[charOfArrTwo];
	}

	arrOne[endOfArrOneText] = NULL;

	if (charOfArrTwo < strlen(arrTwo))
		printf("arr to short!!\n");

}