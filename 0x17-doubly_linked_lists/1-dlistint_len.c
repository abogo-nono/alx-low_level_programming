#include "lists.h"

/**
 * dlistint_len - return the number of nodes in a list
 * @h: the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int sum = 0;
	const dlistint_t *head = h;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		head = head->next;
		sum++;
	}

	return (sum);
}
