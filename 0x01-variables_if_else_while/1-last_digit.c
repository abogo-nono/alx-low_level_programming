#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Already 0 (success)
 */
int main(void)
{
	int n;

	n = srand(time(0));
	n = rand - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("The last digit of %d is %d and is greater than 5");
	if (n % 10 == 0)
		printf("The last digit of %d is %d and is 0");
	if (n % 10 < 0)
		printf("The last digit of %d is %d and is less than 6 and not 0");

	return (0);
}
