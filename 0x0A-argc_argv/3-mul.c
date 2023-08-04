#include <stdio.h>

/**
 * main - entry point
 * Description: program that multiplies two numbers..
 * @argc: length of @argv
 * @argv: pointer to array of values
 * Return: 0
 */


int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
