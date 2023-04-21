#include <stdarg.h>

/**
 * sum_them_all - This function is used to add all given params
 * @n: number of arguments
 * Return: (s) the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int i, s = 0;

	va_start(ap, n);
	for (i = n; i >= 0; i = va_arg(ap, int))
		s += i;

	return (s);
}
