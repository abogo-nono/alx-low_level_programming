#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - this funtion is used to loop through array elements
 * @array: pointer to an array.
 * @size: the size of the array.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
