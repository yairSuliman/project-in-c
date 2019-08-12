#include <stdio.h>

void PintLine(int LineNumber, int Starsumber);
void PintShape(int Starsumber);
void main()
{
	
	PintShape(5);
}


void PintLine(int LineNumber, int Starsumber)
{

	for (int i = 0; i < Starsumber; i++)
	{
		printf("* ");
		
	}

}

void PintShape(int Starsumber)
{
	for (int Line = 0; Line < (Starsumber + Line); Line++, Starsumber--)
	{
		for (int j = 0; j < Line; j++)
		{
			putchar(' ');
		}
		PintLine(Line, Starsumber);
		putchar('\n');
	}
}