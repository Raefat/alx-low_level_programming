#include "main.h"

/**
 * _isdigit - function that checks if character is digit or not
 *
 * @c: the character provided to be checked
 *
 * Return: 0 if is not uppercase and 1 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
