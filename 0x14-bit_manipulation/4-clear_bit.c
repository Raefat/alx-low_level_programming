#include "main.h"

/**
 * clear_bit - function that clears a bit at a given index
 * @n: pointer to a given number
 * @index: given index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
