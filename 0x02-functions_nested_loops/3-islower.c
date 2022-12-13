#include "main.h"

/*
 * _islower - checks if a character is lowercase
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
