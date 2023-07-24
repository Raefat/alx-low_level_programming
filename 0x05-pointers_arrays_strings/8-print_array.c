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

	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
