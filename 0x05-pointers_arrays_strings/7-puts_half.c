#include "main.h"
/**
 * puts_half - function that prints half of a string
 * followed by a new line.
 *
 * @str: pointer to a string
 */

void puts_half(char *str)
{
	int i = 0, end = 0;

	while (str[end] > '\0')
		end++;
	for (i = 0; i < end; i++)
	{
		if (i >= ((end - 1) / 2))
			_putchar(str[i]);
	}
	_putchar('\n');
}
