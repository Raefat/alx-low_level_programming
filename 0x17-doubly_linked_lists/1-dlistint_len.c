#include "lists.h"

/**
 * dlistint_len - function that returns the num of elements in a linked dll.
 * @h: pointer to the dll
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
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
