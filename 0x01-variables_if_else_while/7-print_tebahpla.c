#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints alphabets in reverse order
 *
 * Return: 0
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

