#include "main.h"

/**
 * _strcmp - a function that compare two strings.
 * @dest: first string
 * @src: second string
 * Return: int
 */
int _strcmp(char *dest, char *src)
{
	int i, n = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		if ((int)dest[i] < (int)src[i])
			return (-1);
		else if ((int)dest[i] > (int)src[i])
			return (1);

	return (0);
}
