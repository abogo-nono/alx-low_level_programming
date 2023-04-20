#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This function is used to print a name passed as param
 * @name: the passed name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name)
	{
		f(name);
	}
}
