#include "main.h"
/**
 * print_array - function  that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: pointer to the array itself
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
