#include "main.h"

/**
 * reverse_array - reverse array element
 * @a: the array
 * @n: the number of element in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
}
