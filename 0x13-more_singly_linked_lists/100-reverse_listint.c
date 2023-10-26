#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: list.
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *preview = NULL, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = preview;
		preview = current;
		current = next;
	}

	*head = preview;

	return (*head);
}
