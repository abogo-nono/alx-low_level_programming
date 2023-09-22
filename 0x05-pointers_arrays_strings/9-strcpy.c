#include "main.h"

/**
 * _strcpy - copy a string in another
 * @dest: the destination string
 * @src: the source string
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];

    return (dest);
}
