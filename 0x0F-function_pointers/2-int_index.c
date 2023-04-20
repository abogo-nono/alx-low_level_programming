#include <stdlib.h>
#include "function_pointers.h"


/**
 * int_index - a function that searches for an integer.
 * @array: pointer to an array.
 * @size: the size of array.
 * @cmp: pointer to function.
 * Return: -1 if something were wrong.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0, c;

	while (size > 0 && j < size && cmp != NULL && array)
	{
		c = cmp(array[j]);

		if (c)
			return (j);
		j++;
	}

	return (-1);
}
