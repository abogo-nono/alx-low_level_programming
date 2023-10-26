#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: a pointer to the first element of the list.
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = NULL;
	const listint_t *hare = NULL;
	size_t cpt = 0;
	size_t new_node;

	tortoise = head;

	while (tortoise != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		cpt++;
		tortoise = tortoise->next;
		hare = head;
		new_node = 0;

		while (new_node < cpt)
		{
			if (tortoise == hare)
			{
				printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
				return (cpt);
			}

			hare = hare->next;
			new_node++;
		}

		if (!(head))
		{
			exit(98);
		}
	}

	return (cpt);
}
