/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the number
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	if (n < 0)
		return (-n % 10);
	else
		return (n % 10);
}
