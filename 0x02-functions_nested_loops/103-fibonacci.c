#include <stdio.h>

/**
 * main  - entry point
 *
 * Description: program that sums even fibonacci numbers
 *
 * Return: 0
*/

int main(void)
{
	long int first = 0, second = 1;
	long int fibo = 0;
	long int sum = 0;

	while (fibo <= 4000000)
	{
		if (fibo % 2 == 0)
		{
			sum += fibo;
		}
		fibo = first + second;
		first = second;
		second = fibo;
	}
	printf("%ld\n", sum);
	return (0);
}
