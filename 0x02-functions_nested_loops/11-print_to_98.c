#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: the number passed
 * Return: void
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
		}
	}
	printf("\n");
}
