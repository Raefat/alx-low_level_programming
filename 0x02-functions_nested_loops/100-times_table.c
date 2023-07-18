#include "main.h"

/**
 * print_times_table - function that prints @n times table
 *
 * @n: the number of times table has to be printed
 *
 * Return: void
*/

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				if (i * j >= 100)
				{
					_putchar('0' + (i * j) / 100);
					_putchar('0' + ((i * j) / 10) % 10);
					_putchar('0' + (i * j) % 10);
				}
				else if (i * j < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + i * j);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + (i * j) / 10);
					_putchar('0' + (i * j) % 10);
				}
			}
			_putchar('\n');
		}
	}
}
