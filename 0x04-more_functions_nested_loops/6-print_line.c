#include "main.h"

/**
* print_line - print a straight line in the terminal
* @n: the length of the line
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
