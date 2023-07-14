#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints numbers of base16
 *
 * Return: 0
*/

int main(void)
{
	int c;

	for (c = 0; c < 16; c++)
	{
		if (c < 10)
		{
			putchar('0' + c);
		}
		if (c >= 10)
		{
			putchar('a' + (c - 10));
		}
	}
	putchar('\n');
	return (0);
}

