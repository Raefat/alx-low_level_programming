#include "main.h"

/**
 * reverse_array - function that compares two strings.
 *
 * @a: pointer to the array
 * @n: array's length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp, half = n / 2;

	for (i = 0; i < half; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
