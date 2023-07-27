#include "main.h"

/**
 * infinite_add - function that adds two numbers.
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: char pointer
 */

void infinite_add(char *n1, char *n2, char *r, int size_r)
{	int i, len1 = 0, len2 = 0;
	int num, tens = 0;

	while (n1[len1])
        len1++;
    
	while (n2[len2])
		len2++;

	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);

	n1 += len1 - 1;
	n2 += len2 - 1;
	*(r + size_r) = '\0';
	
	--size_r;
	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, size_r--)
	{
		num = (*n1 - '0') + tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, size_r--)
	{
		num = (*n2 - '0') + tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && size_r >= 0)
	{
		*(r + size_r) = (tens % 10) + '0';
		return (r + size_r);
	}

	else if (tens && size_r < 0)
		return (0);

	return (r + size_r + 1);
}
