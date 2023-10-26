#include "lists.h"

/**
 * sum_listint -  a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * of a listint_t linked list.
 * @head: the list
 *
 * Return: the sum of data of the linked list
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
