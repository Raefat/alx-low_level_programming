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

	if (n <= 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (i * j < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + i * j);
				if (j == n)
					break;
				_putchar(',');
			}
			else if (i * j < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
				if (j == n)
					break;
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar('0' + (i * j) / 100);
				_putchar('0' + ((i * j) / 10) % 10);
				_putchar('0' + (i * j) % 10);
				if (j == n)
					break;
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
