#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: arguments count
 * @av: list of arguments values
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int len = 0, i, j, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	p = malloc(len + 1);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			p[c++] = av[i][j];
		p[c++] = '\n';
	}
	p[len] = '\0';
	return (p);
}
