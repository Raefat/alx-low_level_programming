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
			if (i * j < 10)
			{
				_putchar('0' + j * i);
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');

			}
		}
		_putchar('\n');
	}
}
