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
	long int first = 0, second = 1;
	int i = 0;
	long int fibo;

	while (i < 50)
	{
		fibo = first + second;
		if (i == 49)
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
