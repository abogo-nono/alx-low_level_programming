#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    int sum = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        sum++;
    }

    return sum;
}