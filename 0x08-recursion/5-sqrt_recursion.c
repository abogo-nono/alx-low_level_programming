#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: -1 | natural square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

	int sq = 1;

	return (sqrt_fun(n, sq));
}

/**
 * sqrt_fun - helper
 * @sq: number to determine if square root
 * @n:  int number
 * Return: square root | -1
 */

int sqrt_fun(int n, int sq)
{
	if (n == sq * sq)
		return (sq);
	else if (sq < n)
		return (sqrt_fun(n, ++sq));
	else
		return (-1);
}
