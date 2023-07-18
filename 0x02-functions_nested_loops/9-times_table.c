#include "main.h"

/**
 * times_table - function that prints 9 times table
 *
 * Return: void
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i <= 9 && j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (i * j < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + i * j);
				if (j == 9)
					break;
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
				if (j == 9)
					break;
				putchar(',');
			}
		}
		_putchar('\n');
	}
}
