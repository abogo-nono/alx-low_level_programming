#include <stdio.h>

/**
 * fibonacci - return the sum of all ven-value fibonacci
 * Return: the sun
*/
long int fibonacci(void)
{
	long int i, last_last = 1, last = 2, next, sum = 0;

	next = last_last + last;

	for (i = 2; i < 4000000; i++)
	{
		last_last = last;
		last = next;

		if (next % 2 == 0)
			sum += next;

		next = last_last + last;
	}

	return (sum);
}

/**
 * main - entry point of all c programme
 * Return: 0 already
*/
int main(void)
{
	printf("%lu\n", fibonacci());
	return (0);
}

