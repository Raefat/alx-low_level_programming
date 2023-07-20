#include "main.h"

/**
 * print_diagonals - function that draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonals(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
