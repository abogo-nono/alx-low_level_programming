#include <stdio.h>

/**
* fibonacci - a function that prints the first 50 Fibonacci numbers
* Return: void
*/
void fibonacci(void)
{
	long int i, last_last = 1, last = 2, next;

	printf("%lu, %lu, ", last_last, last);

	for (i = 3; i <= 50; i++)
	{
		next = last_last + last;
		printf("%lu", next);

		if (i != 50)
			printf(", ");

		last_last = last;
		last = next;
	}

	printf("\n");
}

/**
* main - entry point of all C programs
* Return: 0
*/
int main(void)
{
	fibonacci();
	return (0);
}
