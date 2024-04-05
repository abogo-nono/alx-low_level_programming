#include "main.h"

/**
 * _isupper - This function is used to check if a char passed is upper
 * @c: the char to check
 * Return: bool
 */
int _isupper(int c)
{
	int i;

	if ('A' <= c && c <= 'Z')
		return (1);

	return (0);
}
