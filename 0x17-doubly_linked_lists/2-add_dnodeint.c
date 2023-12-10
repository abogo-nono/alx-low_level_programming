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
	}

	if (*list == NULL)
		return (node);

	node->n = n;
	node->prev = NULL;
	node->next = *list;
	(*list)->prev = node;

	*list = node;

	return (*list);
}
