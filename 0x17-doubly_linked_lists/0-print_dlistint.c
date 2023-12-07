#include "lists.h"

/**
 * print_dlistint - display list element
 * @h: the list
 * Return: the number of element
 */
size_t print_dlistint(const dlistint_t *h)
{
	int sum = 0;
	const dlistint_t *head = h;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		sum++;
	}

	return (sum);
}
