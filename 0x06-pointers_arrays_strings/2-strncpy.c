#include "main.h"

/**
 * _strncpy - function that coppies two strings.
 *
 * @dest: pointer to first string
 * @src: pointer to the second string
 * @n: number of letters to coppy from @src
 * Return: pointer the coppied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
