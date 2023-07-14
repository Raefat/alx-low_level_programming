#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints alphabets that are lower case
 *
 * Return: 0
*/

int main(void)
{
	char c = 97;

	while (c < (97 + 26))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

