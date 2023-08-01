#include <stdio.h>

/**
 * fibonacci - a function that print the 50 first fibonacci number
 * Return: void
 */
void fibonacci(void)
{
	long int i, last_last = 1, last = 2, next = last_last + last;

	printf("%lu, %lu, ", last_last, last);

	for (i = 3; i <= 50; i++)
	{
		last_last = last;
		last = next;

		printf("%lu", next);

		if (i != 50)
			printf(", ");

		next = last_last + last;
	}

	printf("\n");
}

/**
 * main - entry point of all c program
 * Return: 0 already
 */
int main(void)
{
	fibonacci();
	return (0);
}
