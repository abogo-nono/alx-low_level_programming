#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds 2 integers.
 * @a: number 1
 * @b: number 2
 * Return: result.
 */
int op_add(int a, int b)
{
	return ((a + b));
}

/**
 * op_sub - substracts 2 integers.
 * @a: number 1
 * @b: number 2
 * Return: result.
 */
int op_sub(int a, int b)
{
	return ((a - b));
}

/**
 * op_mul - multiplies 2 integers.
 * @a: number 1
 * @b: number 2
 * Return: result.
 */
int op_mul(int a, int b)
{
	return ((a * b));
}

/**
 * op_div - divides 2 integers.
 * @a: number 1
 * @b: number 2
 * Return: result.
 */
int op_div(int a, int b)
{
	return ((a / b));
}

/**
 * op_mod - modulo 2 integers.
 * @a: number 1
 * @b: number 2
 * Return: result.
 */
int op_mod(int a, int b)
{
	return ((a % b));
}
