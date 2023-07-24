#include "main.h"

/**
 * swap_int - function swaps the values of two integers
 *
 * @a: pointer to first variable
 * @b: pointer to second variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
