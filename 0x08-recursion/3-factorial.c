/**
 * factorial - finds the factorial of a positive integer
 * @n: integer used to find factorial
 *
 * Return: if n is less than 0 (-1),
 * if n is equal to zero (1),
 * factorial of n otherwise.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
