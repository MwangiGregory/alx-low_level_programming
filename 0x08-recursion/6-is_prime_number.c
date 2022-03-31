/**
 * find_prime - determines if a number is a prime number
 * @test: pointer to an integer
 * @n: possible prime number
 */
void find_prime(int *test, int n)
{
	if (n < 0 || n == 1)/*1 and -ve numbers are not prime numbers*/
	{
		*test = 0;
		return;
	}

	/*
	 * n is not divisible by numbers in the range 2 to n - 1, then
	 * n is a prime number.
	 */
	if (*test == n)
	{
		*test = 1;
		return;
	}
	if (n % (*test) == 0)
	{
		*test = 0;
		return;
	}
	++*test;
	find_prime(test, n);
}
/**
 * is_prime_number - calls find prime
 * @n: possible prime number
 *
 * Return: if prime 1, if not prime 0
 */
int is_prime_number(int n)
{
	int num = 2;
	int *test = &num;

	find_prime(test, n);
	return (num);
}
