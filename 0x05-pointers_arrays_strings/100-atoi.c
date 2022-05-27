#include <stdio.h>
#include <limits.h>
#include "main.h"

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
 * @neg_count: number of -ve signs
 * Return: integer
 */
int convert_to_int(char *str, int neg_count)
{
	int i, j, res = 0, place_val;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			break;
	}
	/*sets i to be as long as digit string*/
	--i;
	place_val = i;

	if (neg_count % 2 == 0)
	{
		for (j = 0; j <= i; j++, place_val--)
		{
			if (((str[j] - '0') * _pow(10, place_val)) > (INT_MAX - res))
				return (0);
			res += ((str[j] - '0') * _pow(10, place_val));
		}
	}
	else
	{
		for (j = 0; j <= i; j++, place_val--)
		{
			if (-1 * ((str[j] - '0') * _pow(10, place_val)) <= (INT_MIN - res))
				return (0);
			res += (-1) * ((str[j] - '0') * _pow(10, place_val));
		}
	}
	return (res);
}

/**
 * _atoi - wrapper function for convert_to_int
 * @s: pointer to a string
 * Return: Integer contained in string
 */
int _atoi(char *s)
{
	int neg_count = 0, i, res = 0;
	char *num_ptr = s;

	/*count signs and find 1st digit*/
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			neg_count++;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	}

	/*point to 1st digit*/
	num_ptr += i;
	res = convert_to_int(num_ptr, neg_count);
	return (res);
}
