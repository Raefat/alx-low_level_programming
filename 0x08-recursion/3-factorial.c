#include "main.h"

/**
 * factorial - function that returns a factorial of given number
 *
 * @n: integer
 *
 * Return: factorial value of @s
 */

int factorial(char *n)
{
	if (n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (factorial(--n) * n);
}
