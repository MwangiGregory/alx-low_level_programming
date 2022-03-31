/**
 * find_root - finds the natural root of n
 * @test: pointer to an integer
 * @n: positive integer
 */
void find_root(int *test, int n)
{
	if (n < 0)
	{
		*test = -1;
		return;
	}
	if ((*test) * (*test) == n)
	{
		return;
	}
	if ((*test) > (n / 2))
	{
		*test = -1;
		return;
	}
	++*test;
	find_root(test, n);
}

/**
 * _sqrt_recursion - calls find_root and guesses root of n
 * @n: positive integer
 *
 * Return: -1 if n has no natural root, a positive integer otherwise
 */
int _sqrt_recursion(int n)
{
	int num = 1;
	int *test = &num;

	find_root(test, n);
	return (num);
}
