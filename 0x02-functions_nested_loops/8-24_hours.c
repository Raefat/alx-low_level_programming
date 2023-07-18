#include "main.h"

/**
 * jack_bauer - function that returns last digit of a number
 *
 * Return: void
*/

void jack_bauer(void)
{
	for (int i = 0; i <= 23; i++)
	{
		for (int j = 0; j <= 59; j++)
		{
			if (i <= 9)
			{
				_putchar('0');
				_putchar('0' + i);
				_putchar(':');
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
				_putchar(':');
			}
			if (j <= 9)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			_putchar('\n');
		}
	}
}
