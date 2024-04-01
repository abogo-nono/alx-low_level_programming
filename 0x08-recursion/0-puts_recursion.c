#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putc(*s);
	_puts_recursion(s + 1);
}
