#include "main.h"
#include <math.h>
/**
 * print_number - function that prints an integer
 *
 * @n: The number that will be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int num = n, numOfDivision = 0;

	if (n < 0)
	{
		n = -n;
		num = n;
		_putchar('-');
	}
	while (n > 0)
	{
		n /= 10;
		numOfDivision++;
	}
	while (numOfDivision > 0)
	{
		_putchar('0' + num / (pow(10, numOfDivision - 1)));
		num = num % ((int) pow(10, numOfDivision - 1));
		numOfDivision--;
	}
	_putchar('\n');
}
