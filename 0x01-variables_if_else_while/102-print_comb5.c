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
	int k;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (n == 0 && j == 0 && k == 0 && m == 0)
						continue;
					putchar('0' + n);
					putchar('0' + j + n + 1);
					putchar(' ');
					putchar('0' + k + n + j + 1);
					putchar('0' + m + k + j + n + 1);
					if (n == 9 && j == 8 && k == 9 && m == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
