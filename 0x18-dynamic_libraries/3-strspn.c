#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: the string to be searched
 * @accept: the prefix to be measured
 * Return: the number of bytes in the initial segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i = 0, j;

	while (s[i] >= '\0')
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		i++;
	}
	return (n);
}
