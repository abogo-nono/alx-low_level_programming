#include "lists.h"

/**
 * add_dnodeint - add a new node
 * @head: the list
 * @n: the value to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	if (*head == NULL)
		return (node);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	if (node->next != NULL)
		node->next->prev = node;

	return (node);
}
