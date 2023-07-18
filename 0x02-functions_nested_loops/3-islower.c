#include "main.h"

/**
 * _islower - function that prints alphabets 10 times
 *
 * Return: 0 or 1
*/

int _islower(int c)
{
	int isLower;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
}
