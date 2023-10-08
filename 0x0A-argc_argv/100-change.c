#include <stdio.h>
#include <stdlib.h>

int minCoins(int);

/**
 * main - Entry point
 * @argc: number arguments passed to gcc
 * @argv: table of passed arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int result;
	(void)argv;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
	}

	result = minCoins(atoi(argv[1]));
	printf("%d\n", result);

	return (0);

}

/**
 * minCoins - a function that prints the
 *            minimum number of coins to make change for an amount of money
 * @amount: the passed amount
 * Return: the min value
 */
int minCoins(int amount)
{
	int coins[] = {25, 10, 5, 2, 1};
	int min = -1;
	int i;

	if (amount <= 0)
		return (0);

	for (i = 0; i < 5; i++)
	{
		if (amount >= coins[i])
		{
			int current = minCoins(amount - coins[i]) + 1;

			if (min == -1 || current < min)
			{
				min = current;
			}
		}
	}

	return (min);
}
