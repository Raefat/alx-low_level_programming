#include <stdio.h>

/**
 * main  - entry point
 *
 * Description: program that prints fibonacci numbers
 *
 * Return: 0
*/

int main(void)
{
	unsigned long int fraction1 = 0, first = 1, fraction2 = 0, second = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", first, second);
	for (count = 2; count < 98; count++)
	{
		if (first + second > 10000000000 || fraction2 > 0 || fraction1 > 0)
		{
			hold1 = (first + second) / 10000000000;
			hold2 = (first + second) % 10000000000;
			hold3 = fraction1 + fraction2 + hold1;
			fraction1 = fraction2, fraction2 = hold3;
			first = second, second = hold2;
			printf("%lu%010lu", fraction2, second);
		}
		else
		{
			hold2 = first + second;
			first = second, second = hold2;
			printf("%lu", second);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
