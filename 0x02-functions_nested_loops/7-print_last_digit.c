#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the number
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	n = (n < 0) ? n * -1 : n;

	int r = n % 10;

	_putchar('0' + r);

	return (r);
}
