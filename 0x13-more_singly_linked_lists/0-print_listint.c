#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: the pointer to the first element of the list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int elements = 0;
	const listint_t *list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		elements += 1;
		list = list->next;
	}

	return (elements);
}
