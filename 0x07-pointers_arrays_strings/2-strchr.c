#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: array string
 * @c: charater to look for
 * Return: NULL | pointer to first occurrence of char `c`
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (1 + s++);

	return (s + 1);
}
