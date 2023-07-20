#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor 
 * of the number 612852475143, followed by a new line.
 * Return: 0
 */

int main(void)
{
	long int prime = 612852475143;
	long int div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
				prime /= div;
		}
	}

	printf("%ld\n", prime)
	return (0);
}
