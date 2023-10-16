#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to first string
 * @src: pointer to the second string
 *
 * Return: pointer the concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
