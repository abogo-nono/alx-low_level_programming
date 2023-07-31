/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the number
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	if (n % 10 == n)
		return (n);

	return ((n % 10) * 10 + (n % 10));
}
