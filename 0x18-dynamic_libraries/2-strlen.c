#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: pointer to a string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s = s + 1;
		length++;
	}
	return (length);
}
