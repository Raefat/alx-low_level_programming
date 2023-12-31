#include "lists.h"

/**
 * free_listint - function that frees istint_t list
 * @head: head node
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
