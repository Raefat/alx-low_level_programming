#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: int pointer to the created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
