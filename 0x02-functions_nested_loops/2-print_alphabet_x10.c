#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabets 10 times
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		if (i == 10)
		{
			break;
		}
		_putchar('\n');
	}
}
