#include "main.h"

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * @r: The root to be tested.
 *
 * Return: square root of the number or -1 if it doesnt exist
 */
int find_sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);
	if (r == n / 2)
		return (-1);

	return (find_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer
 * Return: value of square root @x
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, r));
}
