#include "main.h"

/**
 * print_last_digit - function that returns last digit of a number
 *
 * @n: the number that we will return its last digit
 *
 * Return: last digit of @n
*/

int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}
