#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings params.
 * @separator: params seprator.
 * @n: number of params.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s = separator;
	char *str;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = (i < (n - 1)) ? s : NULL;
		str = va_arg(l, char *);
		printf("%s", (str != NULL) ? str : "(nil)");
		if (s != NULL)
			printf("%s", s);
	}
	va_end(l);
	printf("\n");
}
