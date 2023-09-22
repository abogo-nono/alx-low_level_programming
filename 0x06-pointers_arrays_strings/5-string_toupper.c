#include "main.h"

/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @s: the string
 * Return: the string
 */
char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 'a'; j <= 'z'; j++)
			if (s[i] == j)
				s[i] = s[i] - 32;

	return (s);
}
