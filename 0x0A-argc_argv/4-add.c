#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * Description: program that adds positive numbers.
 * @argc: length of @argv
 * @argv: pointer to array of values
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int i, sum = 0, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
