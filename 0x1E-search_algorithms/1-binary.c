#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array we search in
 * @size: the size of the array we search in.
 * @value: the value we search in the array
 *
 * Return: the first index where @value is located or -1
 * if @value is not present in @array or if @array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, i, middle;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		middle = floor((left + right) / 2);

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
