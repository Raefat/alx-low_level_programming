#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the dll
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
