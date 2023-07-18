#include "main.h"

/**
 * _islower - function that checks if character is lowercase
 *
 * Return: 0 or 1
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
