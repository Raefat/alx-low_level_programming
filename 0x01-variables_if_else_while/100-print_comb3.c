#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints numbers combinations
 *
 * Return: 0
*/

int main(void)
{
	int n;
	int j;

	for (n = 0; n < 9; n++)
	{
		for (j = n; j <= 9; j++)
		{
			putchar('0' + n);
			putchar('0' + j);
			if (n == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
