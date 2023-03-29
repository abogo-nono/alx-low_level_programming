#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int i, sum;

	for (i = 0; s[i] != '\0'; i++)
	{}

	sum = i;

	for (i = sum - 1; s[i] != '\0'; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

