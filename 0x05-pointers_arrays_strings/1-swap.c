/**
 * swap_int - is used to swap the values of two pointers
 * @a: first
 * @b: second
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
