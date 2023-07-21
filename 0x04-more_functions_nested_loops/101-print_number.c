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
	int num = n, numOfDivision = 1;

	if (n < 0)
	{
		n = -n;
		num = n;
		_putchar('-');
	}
	while (n > 10)
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
	_putchar('\n');
}
