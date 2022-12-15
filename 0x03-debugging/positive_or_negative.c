#include <stdio.h>

/**
 * main - Entry point
 * Description: print value of n status
 * Return: O (succes)
 */

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positve\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
