#include "main.h"


/**
 * print_binary -  a function that prints the binary representation of a number.
 *
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	while (n!= 0)
	{
		_putchar(n % 2 + '0');
		n /= 2;
		i++;
	}
	while (i < 32)
	{
		_putchar('0');
		i++;
	}
	_putchar('\n');

	return;
}