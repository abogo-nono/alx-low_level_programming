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

	int number, i;
	char number_letter[50];
	sprintf(number_letter, "%d", number);

	for (i = 0; i < (int)(strlen(number_letter)); i++)
	{
		putchar(number_letter[i]);
		putchar(',');
		putchar(' ');
	}
	printf("\n");
	return (0);
}
