#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given 
 * as a parameter on each element of an array.
 * @array: array to be procecced 
 * @size: siz eof the array
 * @action: poiner to a fucntion
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
