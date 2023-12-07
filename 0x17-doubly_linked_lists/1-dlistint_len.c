#include "lists.h"

/**
 * dlistint_len - return the number of elements of the list
 * @h: the list
 * Return: the number of element
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
