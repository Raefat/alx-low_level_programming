#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints a linked list
 *
 * @h: pointer to a node
 * Return: length of linked list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
