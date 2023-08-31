#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, count = 0, num = 0, sum, power;

	if (b == NULL)
		return (0);
	while (b[count])
	count++;

	for (i = 0; i < count; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			power = count - 1 - i;
			sum = 1;
			while (power)
			{
				sum *= 2;
				power--;
			}
			num += sum;
		}
	}
	return (num);
}

