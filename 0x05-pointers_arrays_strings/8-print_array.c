#include "main.h"

/**
 * print_array - A function that print all the elements of an array
 * @a: int pointer
 * @n: integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(', ');
	}
}
