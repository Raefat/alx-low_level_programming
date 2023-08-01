#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: pointer to an array of @szie elements
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	if (size == 1)
	{
		printf("%d\n", a[0]);
		return;
	}
	for (i = 0; i < size * size; i += size + 1)
		sum1 += a[i];
	for (j = size * size - size; j >= 0; j -= size - 1)
		sum2 += a[j];
	printf("%d, %d\n", sum1, sum2);
}
