#include "main.h"

/**
 * _isdigit - checks if digit
 * @c: parameter
 * 
 * Return: 0 if succesful
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
