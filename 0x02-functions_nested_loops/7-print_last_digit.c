#include "main.h"

/**
 *print_last_digit - output last digit of a number
 *@n - number used to obtain last digit.
 *@ld - last digit of n
 *
 *Return: last digit of n
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = (n * -1) % 10;		
	}
	else
	{
		ld = n % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
