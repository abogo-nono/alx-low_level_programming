#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatained two string
 * @dest: first string
 * @src: second string
 * @n: concataine start point
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest), i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
