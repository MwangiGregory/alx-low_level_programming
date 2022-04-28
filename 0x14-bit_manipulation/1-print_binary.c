#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	char rem;
	unsigned int div;
	int ascii_of_0 = 48;

	if (n == 1)
	{
		_putchar(1 + ascii_of_0);
		return;
	}
	if (n == 0)
	{
		_putchar(ascii_of_0);
		return;
	}

	/*
	 * similar to n/2
	 */
	div = n >> 1;

	print_binary(div);

	/*
	 * similar to n%2
	 */
	rem = (n - (div << 1)) + ascii_of_0;

	_putchar(rem);
}
