#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: the pointer to the first element of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;
	const listint_t *head = h;

	while (head != NULL)
	{
		len += 1;
		head = head->next;
	}

	return (len);
}
