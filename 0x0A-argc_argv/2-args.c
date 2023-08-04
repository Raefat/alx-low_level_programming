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
	int arg = argc;

	while (argc)
	{
		printf("%s\n", argv[arg - argc]);
		argc--;
	}
	return (0);
}
