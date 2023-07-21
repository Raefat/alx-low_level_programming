#include <math.h>
#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: The number that will be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
