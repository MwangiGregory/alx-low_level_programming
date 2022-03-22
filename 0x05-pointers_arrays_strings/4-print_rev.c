#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line.
 * @s: address of first element in character array
 */
void print_rev(char *s)
{
	int i = 0;
	char c = *s;

	while (c)
	{
		i++;
		c = *(s + i);
	}
	while (i >= 0)
	{
		c = *(s + i);
		_putchar(c);
		--i;
	}
	_putchar('\n');
}
