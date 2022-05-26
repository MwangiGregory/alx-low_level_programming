#include <stdio.h>
#include "main.h"

int main(void)
{
	char *s = "greg++--";

	_atoi(s);
}

/**
 * _pow - finds value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: value of x raised to y
 */
int _pow(int x, int y)
{
	if (x == 0)
	{
		return (0);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow(x, (y - 1)));
}

/**
 * convert_to_int - converts a digit char into an int
 * @str: pointer to string containing digits
 * Return: integer
 */
int convert_to_int(char *str)
{
	int i, j, res, place_val;

	for (i = 0; str[i]; i++)
	{
		if (str[i] <= '0' || str[i] >= '9')
			break;
	}
	/*sets i to be as long as digit string*/
	--i;
	place_val = i;
	for (j = 0; j <= i; j++, place_val--)
	{
		res += ((str[j] - '0') * _pow(10, place_val));
	}
	return (res);
}

/*
 * _atoi - wrapper function for convert_to_int
 * @s: pointer to a string
 * Return: Integer contained in string
 */
int _atoi(char *s)
{
	int neg_count, pos_count, i, res;
	char *num_ptr = s;

	/*count signs and find 1st digit*/
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			neg_count++;
		else if (s[i] == '+')
			pos_count++;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	/*point to 1st digit*/
	num_ptr += i;
	res = convert_to_int(num_ptr);
	printf("%d\n", res);
	return 0;
}
