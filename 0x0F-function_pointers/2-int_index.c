#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: name to be printed
 * @size: pointer to a function
 * @cmp: pointer to a function
 * Return: int to the found index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
}
