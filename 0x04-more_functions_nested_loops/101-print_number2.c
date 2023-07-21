#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: The number that will be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int m, num = n, isNegative;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	m = 1;
	isNegative = 1;
	while (isNegative)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			isNegative = 0;
	}
	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
}
