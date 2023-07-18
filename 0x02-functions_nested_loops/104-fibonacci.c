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
	unsigned long int first = 0, second = 1;
	int i = 0;
	unsigned long int fibo;

	while (i < 98)
	{
		fibo = first + second;
		if (i == 97)
		{
			printf("%ld\n", fibo);
			break;
		}
		printf("%ld, ", fibo);
		first = second;
		second = fibo;
		i++;
	}
	return (0);
}
