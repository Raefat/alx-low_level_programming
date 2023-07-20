#include "main.h"
#include <stdio.h>

/**
 * main - function that prints numbers from 0 to 100
 * but for multiples of 3 prints Fizz and for multiples of 5 prints Buzz
 * and for multiples of both prints FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
