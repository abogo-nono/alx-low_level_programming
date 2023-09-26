#include "main.h"

/**
* print_square - print a square using # sign
* @size: th height and weight of the square
*/
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
