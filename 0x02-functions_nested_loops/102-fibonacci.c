#include <stdio.h>

/**
 * fibonacci - a function that print the 50 first fibonacci number
 * Return: void
 */
void fibonacci(void)
{
	int i;

	printf("%d, %d, ", 1, 2);

	for (i = 3; i < 50; i++)
	{
		printf("%d", ((i - 1) + i));

		if (((i - 1) + i) != 97)
			printf(", ");
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
