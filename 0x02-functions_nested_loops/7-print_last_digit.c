#include "main.h"

/**
 *print_last_digit - output last digit of a number
 *@n: number used to obtain last digit.
 *Return: integer
 */
int print_last_digit(int n)
{
	int ld = 0;
	int num = n;

	if (num < 0)
	{
		num = num * (-1);
		ld = num % 10;
	}
	else
	{
		ld = num % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
