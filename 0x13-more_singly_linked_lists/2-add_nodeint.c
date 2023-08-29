#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list
 * @head: head node
 * @n: number in the node
 * Return: address or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || head == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
