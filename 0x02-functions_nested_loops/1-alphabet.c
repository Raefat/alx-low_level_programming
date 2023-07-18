#include "main.h"

/**
 * print_alphabet - function that prints alphabets
 *
 * Return: void
*/

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
