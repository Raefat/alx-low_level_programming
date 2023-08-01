#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointer to a pointer to a string
 * @to: pointer to target string
 * Return: void
 */

void set_string(int **s, char *to)
{
	*s = to;
}
