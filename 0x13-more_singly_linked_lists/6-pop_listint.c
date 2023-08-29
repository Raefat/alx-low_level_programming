#include "lists.h"

/**
 * pop_listint - function that  deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: double pointer to a head node
 * Return: n or 0 if linkedlist is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
