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
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
