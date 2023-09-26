#include "main.h"
#include <unistd.h>

/**
* _putchar - print single character
* @c: the char to print
* Return: passe char
*/
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
