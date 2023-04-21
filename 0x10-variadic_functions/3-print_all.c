#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints all type of params.
 * @format: param format.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, len = 0;
	char *str;
	va_list l;

	va_start(l, format);
	while (format[len])
		len++;
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(l, int));
			break;
			case 'i':
			 printf("%d", va_arg(l, int));
			break;
			case 's':
			str = va_arg(l, char *);
			printf("%s", (str != NULL) ? str : "(nil)");
			break;
			case 'f':
			printf("%f", va_arg(m, double));
			break;
			default:
			break;
		}
		i++;
		if (i < (len))
			printf(", ");
	}
	va_end(l);
	printf("\n");
}
