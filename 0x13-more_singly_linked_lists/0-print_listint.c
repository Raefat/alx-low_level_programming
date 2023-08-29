#include "lists.h"

/**
 * print_listint - function that prints a linked list
 *
 * @h: pointer to a node
 * Return: length of linked list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;
	listint_t *curr;

	curr = (listint_t*) h;
	while (curr)
	{
		printf("%d\n", curr->n);
		i++;
		curr = curr->next;
	}
	return (i);
}
