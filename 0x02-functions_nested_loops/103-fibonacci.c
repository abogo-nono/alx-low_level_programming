#include <stdio.h>

/**
* fibonacci - return the sum of even-valued Fibonacci numbers up to a limit
* @limit: the limit to which Fibonacci numbers are summed
* Return: the sum
*/
long int fibonacci(long int limit)
{
	long int a = 1, b = 2, sum = 0, temp;

	while (b <= limit)
	{
		if (b % 2 == 0)
			sum += b;

		temp = a;

		a = b;
		b = temp + b;
	}

	return (sum);
}

/**
* main - Entry point.
* Return: 0 always
*/
int main(void)
{
	long int limit = 4000000;

	printf("%ld\n", fibonacci(limit));
	return (0);
}
