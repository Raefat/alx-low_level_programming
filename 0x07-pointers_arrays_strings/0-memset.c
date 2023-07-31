#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: pointer to an area of memory
 * @b: constant bytes
 * @n: number of bytes o be filled
 *
 * Return: pointer @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n] = b;
		n--;
	}
	return (s);
}
