#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: array to copy into
 * @src: array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
		dest[count] = src[count++];

	return (dest);
}
