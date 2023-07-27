#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int num, numOfDivision = 1;

	num = n;
	if (n < 0)
	{
		n = -n;
		num = n;
		_putchar('-');
	}
	while (n > 9)
	{
		n /= 10;
		numOfDivision *= 10;
	}
	while (numOfDivision > 0)
	{
		_putchar('0' + num / numOfDivision);
		num = num % numOfDivision;
		numOfDivision /= 10;
	}
}
