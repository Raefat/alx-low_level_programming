#include "main.h"
/**
 * puts2 - function prints every other character of a string
 * starting with the first character, followed by a new line.
 *
 * @str: pointer to a string
 */

void puts2(char *str)
{
	int i = 0, end = 0;

	while (str[end] > '\0')
		end++;
	for (i = 0; i < end; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
