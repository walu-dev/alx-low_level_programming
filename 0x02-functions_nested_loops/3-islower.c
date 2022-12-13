#include "main.h"

/*
 * _islower - checks if a character is lowercase if true it returns 1
 * else returns 0 just like islower() function in ctype.h
 * @c: Is the int value to be compared with the ASCII value
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
