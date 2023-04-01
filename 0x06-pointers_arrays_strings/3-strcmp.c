#include "main.h"

/**
 * _strcmp - a function that compare two strings.
 * @dest: first string
 * @src: second string
 * Return: int
 */
int _strcmp(char *dest, char *src)
{
	int i = 0, value;

	while (dest[i] == src[i] && dest[i] != '\0')
		i++;

	value = dest[i] - src[i];
	return (value);
}
