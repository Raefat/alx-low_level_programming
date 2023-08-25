#include "lists.h"

/**
 * free_list - frees a list from memory
 * @head: head of the linked list.
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *curr;

	curr = head;
	while (curr != NULL)
	{
		curr = head->next;
		free(curr->str);
		free(curr);
	}
}
