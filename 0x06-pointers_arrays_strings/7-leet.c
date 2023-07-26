#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 *
 * @s: pointer to string
 *
 * Return: leet encoded string
 */

char *leet(char *s)
{
	int i = 0, j;
	char l[] = {'a', 'e', 'o', 'l', 't'};
	int v[] = {4, 3, 0, 1, 7};

	while (s[i] != '\0')
	{
		for (j = 0; j < sizeof(l) / sizeof(char); j++)
		{
			if (s[i] == l[j] || s[i] == l[j] - 32)
				s[i] = '0' + v[j];
		}
		i++;
	}
	return (s);
}
