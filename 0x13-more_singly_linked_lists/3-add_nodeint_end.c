#include "lists.h"

/**
 * add_nodeint_end - function  adds a new node at the end of a listint_t list
 * @head: head node
 * @n: number in the node
 * Return: address or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *curr;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;

	curr->next = newNode;
	return (newNode);
}
