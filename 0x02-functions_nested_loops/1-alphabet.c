#include "main.h"

/**
 * print_alphabets - function that prints alphabets
 *
 * Return: 0
*/

int print_alphabets(void)
{
	char c;

	for (int c = 'a'; c <= 'z'; c++)
	{
		_puctchar(c);
	}
	_puchar('\n');

	return (0);
}
