#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: number of array members
 * @size: size of each element in array
 * Return: void pointer of allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	t = p;
	for (i = 0; i < (size * nmemb); i++)
		t[i] = '\0';
	return (p);
}
