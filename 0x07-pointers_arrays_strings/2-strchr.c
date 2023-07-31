#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: pointer to the string
 * @c: character to be located
 * Return: pointer to the first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
