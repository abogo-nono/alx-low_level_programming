#include "main.h"

/**
 * print_triangle - print a triangle using # sign
 * @size: the size
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			if (i + j == size)
				for (k = j; k <= size; k++)
					_putchar('#');
			else if (i + j <= size)
				_putchar(' ');
		_putchar('\n');
	}
}
