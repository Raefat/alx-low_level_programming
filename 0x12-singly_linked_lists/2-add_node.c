#include "lists.h"

/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list 
 *
 * @head: pointer to a headNode
 * @str: pointer to the string
 * Return: new list node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	
	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	*head = newNode;
	return (*head);
}
