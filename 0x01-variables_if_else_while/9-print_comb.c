#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 0 Already (success)
 *
 */
int main(void)
{

	int number;
	char number_letter[50];
	sprintf(number_letter, "%d", number);

	for (i = 0; i < strlen(number_letter); i++)
	{
		putchar(number_letter[i]);
		putchar(', ');
	}
	printf("\n");
	return (0);
}
