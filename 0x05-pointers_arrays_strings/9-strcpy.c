#include "main.h"
/**
 * *_strcpy - function  that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: character pointer
 */

char *_strcpy(char *dest, char *src)
{
	int end = 0, i;

	while (dest[end] != '\0')
		end++;
	for (i = 0; i < end; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
