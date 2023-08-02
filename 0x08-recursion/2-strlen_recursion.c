#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: pointer to a string
 *
 * Return: length of string @s
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(++s) + 1);
}
