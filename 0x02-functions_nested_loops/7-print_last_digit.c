#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the number
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar('0' + (-n % 10));
		return (-n % 10);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);

	}
}
