#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: character
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	while (i != size && p != NULL)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
