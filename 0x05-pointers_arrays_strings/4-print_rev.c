#include "main.h"

/**
 * print_rev - count the numberf characters of a string
 * @s: the string
 * Return: i
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
