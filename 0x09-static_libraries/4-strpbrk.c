#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: the string to be searched
 * @accept: the prefix to be measured
 * Return: a pointer to the matched byte in @s or NULL;
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
		i++;
	}
	return ('\0');
}
