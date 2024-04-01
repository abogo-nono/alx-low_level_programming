#include "main.h"

/**
 * _isdigit - This function is used to check if a char passed is a digit
 * @c: the char to check
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	int i;

	if ('0' <= c && c <= '9')
		return (1);

	return (0);
}
