#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: the string to be searched
 * @accept: the prefix to be measured
 * Return: the number of bytes in the initial segment of @s
 */

unsigned int *_strspn(char *s, char *accept)
{
	unsigned int n = 0, i = 0, j;

	while (accept[i] >= '\0')
	{
		for (j = 0; s[j] >= '\0'; j++)
		{		
			if (accept[i] == s[j])
			{
				 n++;
				 break;
			}
		}
		i++;
	}
	return (n);
}
