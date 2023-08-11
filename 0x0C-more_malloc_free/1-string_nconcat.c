#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string pointer
 * @s2: second string pointer
 * @n: n bytes from @s2 to be added to @s1
 * Return: pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, len = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
		len2++;
	len2 = n >= len2 ? len2 : n;
	p = malloc(len + len2 - 1);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
		p[i + len] = s2[i];
	p[len + len2] = '\0';
	return (p);
}
