#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints alphabets except q and e
 *
 * Return: 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}

