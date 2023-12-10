#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: the list
 * @n: the node to add
 * Return: <address> | NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (last == NULL)
	{
		last = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	new_node->prev = last;
	last->next = new_node;

	return (new_node);
}
