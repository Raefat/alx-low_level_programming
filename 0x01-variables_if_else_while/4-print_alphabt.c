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
	char c = 97;

	while (c < (97 + 26))
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

