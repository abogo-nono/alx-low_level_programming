#include "main.h"

/**
* _isupper - This function is used to check if a char passed is upper
* @c: the char to check
* Return: bool
*/
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
