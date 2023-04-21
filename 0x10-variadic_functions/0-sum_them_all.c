#include <stdarg.h>

/**
 * sum_them_all - This function is used to add all given params
 * @n: number of arguments
 * Return: (s) the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list e;

	va_start(e, n);

	for (i = 0; i < n; i++)
		s += i;

	return (s);
}
