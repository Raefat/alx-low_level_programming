#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line.
 *
 * @s: pointer to a string
 */

void print_rev(char *s)
{
	char firstLetter = *s;

	while (*s != '\0')
	{
		s = s - 1;
	}
	while (*s != firstLetter)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
