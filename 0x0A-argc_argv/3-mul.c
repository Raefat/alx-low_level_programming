#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: program that multiplies two numbers..
 * @argc: length of @argv
 * @argv: pointer to array of values
 * Return: 0
 */


int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
