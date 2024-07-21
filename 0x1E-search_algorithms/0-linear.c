#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - that searches for a value in
 * an array of integers using
 * the Linear search algorithm
 *
 * @array: a pointer to the first element of
 * the array we search in
 * @size: the size of the array we search in.
 * @value: the value we search in the array
 *
 * Return: the first index where @value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
