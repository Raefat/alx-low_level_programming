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
		for (j = n + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				for (m = k + 1; m <= 9; m++)
				{
					putchar('0' + n);
					putchar('0' + j);
					putchar('0' + k);
					putchar('0' + m);
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
