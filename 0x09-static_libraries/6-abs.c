#include "main.h"

/**
 * _abs - function that returns absolute value of a number
 *
 * @n: the character that we will return its absolute value
 *
 * Return: absolute value of @n
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}
