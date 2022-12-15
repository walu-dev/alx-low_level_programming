#include <stdio.h>

/**
 * main - Entry point
 * Description: print value of n status
 * Return: O (succes)
 */

void positive_or_negative(int a)
{
	if (a == 0)
	{
		printf("%d is zero\n", a);
	}
	else if (a > 0)
	{
		printf("%d is positve\n", a);
	}
	else
	{
		printf("%d is negative\n", a);
	}
}
