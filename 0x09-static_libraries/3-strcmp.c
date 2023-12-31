#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *
 * @s1: pointer to first string
 * @s2: pointer to the second string
 * Return: -1 or 0 if string are identical
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
