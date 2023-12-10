#include "lists.h"

/**
 * add_dnodeint - add a new node
 * @head: the list
 * @n: the value to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t **list = head;
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		perror("Can't allocate memory!");
		exit(EXIT_FAILURE);
		return (NULL);
	}

	node->n = n;
	node->prev = NULL;
	node->next = *list;
	if (*list == NULL)
		(*list)->prev = node;

	*list = node;

	return (node);
}
