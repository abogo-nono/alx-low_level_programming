#include "main.h"

/**
 * print_number - a function that print am integer number
 * @n: the number passed
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	putchar('0' + n % 10);
}
