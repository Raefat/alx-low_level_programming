#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: pointer to a string
 *
 * Return: pointer to the newly allocated space
 */

char *_strdup(char *str)
{
	char *p;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	p = malloc(len + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		p[i] = str[i];

	return (p);
}
