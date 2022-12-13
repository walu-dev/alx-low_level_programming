#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void);

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
	return (0);
}
