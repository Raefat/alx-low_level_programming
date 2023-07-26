#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer to first string
 * @src: pointer to the second string
 * @n: number of letters we take from @src
 * Return: pointer the concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
