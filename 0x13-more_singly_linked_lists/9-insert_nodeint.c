#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: double pointer to a head node
 * @idx: given position
 * @n: given position
 * Return: address of new node or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *newNode;
	int i;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	curr = *head;
	for (i = 0; i < idx - 1 && curr ; i++)
		curr = curr->next;
	newNode->next = curr->next;
	curr->next = newNode;
	return (newNode);
}

