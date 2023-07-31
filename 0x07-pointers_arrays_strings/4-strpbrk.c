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

	while (s[i] >= '\0')
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + j);
			}
		}
		i++;
	}
	return ('\0');
}
