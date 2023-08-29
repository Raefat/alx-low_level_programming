#include "lists.h"

/**
 * get_nodeint_at_index -  that returns the nth node of a listint_t linked list
 * @head: double pointer to a head node
 * @index: the index of the node
 * Return: node or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head; i++)
		head = head->next;
	if (!head)
		return (NULL);
	return (head);
}
