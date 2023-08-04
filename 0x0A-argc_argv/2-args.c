#include <stdio.h>

/**
 * main - entry point
 * Description: program that prints all arguments it receives.
 * @argc: length of @argv
 * @argv: pointer to array of values
 * Return: 0
 */


int main(int argc, char *argv[])
{
	while (--argc)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
