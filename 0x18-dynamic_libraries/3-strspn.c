#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (s[i] != '\0') /*iterate thriugh strig*/
	{
		for (j = 0; accept[j] != '\0'; j++)/*iterate throgh target*/
		{
			if (s[i] == accept[j]) /*if match record a break*/
			{
				matches++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			return (matches);/*return if idx doesn't match*/
		}
		i++;
	}
	return (matches);
}
