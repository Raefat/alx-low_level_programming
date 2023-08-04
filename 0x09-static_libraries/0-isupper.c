#include "main.h"

/**
 * _isupper - function that checks if letter is uppercase or not
 *
 * @c: the character provided to be checked
 *
 * Return: 0 if is not uppercase and 1 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
