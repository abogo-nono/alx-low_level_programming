#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - that searches for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: a pointer to the first element of the array we search in
 * @size: the size of the array we search in.
 * @value: the value we search in the array
 *
 * Return: the first index where @value is located or -1
 * if @value is not present in @array or if @array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int position = -1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			position = i;
			break;
		}
	}

	return (position);
}
