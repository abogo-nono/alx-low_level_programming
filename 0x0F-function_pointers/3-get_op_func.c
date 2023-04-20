#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function used to select operation
 * @s: the flag.
 * Return: pointer to correct function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
