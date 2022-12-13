#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 *
 * Description: 'Prints all the numbers of base 16 in lowercasei'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0'; /*Initialize num to 0*/
	char letter = 'a'; /*Initialize letter to a*/

	while (num <= '9') /*Print 0-9*/
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')/*Prints from a-f*/
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}