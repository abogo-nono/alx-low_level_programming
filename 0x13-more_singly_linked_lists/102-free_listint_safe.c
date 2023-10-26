#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to the first node of the list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int diff;
	listint_t *current;

	if (*h == NULL || h == NULL)
	{
		return (0);
	}

	while (*h != NULL)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
