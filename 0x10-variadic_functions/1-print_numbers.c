#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - this function is used to print his params.
 * @separator: params seprator.
 * @n: number of params
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s = separator;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = (i < (n - 1) ? separator : NULL);
		printf("%d", va_arg(l, int));
		if (s != NULL)
		printf("%s", s);
	}
	printf("\n");
}
