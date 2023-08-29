#include "lists.h"

/**
 * listint_len - function that counts length
 * @h: head node
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
