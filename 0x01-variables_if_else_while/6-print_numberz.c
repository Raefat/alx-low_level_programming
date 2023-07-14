#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints numbers from 0 to 10 using putchar
 *
 * Return: 0
*/

int main(void)
{
	int n;

	for (n = 48; n < 48 + 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

