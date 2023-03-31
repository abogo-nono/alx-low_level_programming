#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatained two string
 * @dest: first string
 * @src: second string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest), i;

	for (i = 0; i < dest_len && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
