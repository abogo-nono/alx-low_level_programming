#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: the number
 * @m: the number of bits to flip
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cpt = 0, p;

    p = n ^ m;

	while (p > 0)
	{
		cpt++;
		p &= (p - 1);
	}
	return (cpt);
}
